#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
using namespace std;
#define ll long long
int main() {
    ll N;
    cin >> N;
    map<ll, ll> m;
    ll maxN = 0;
    for (int i = 0; i < N; i++) {
        ll temp;
        cin >> temp;
        m[temp]++;
        maxN = max(maxN, temp);
    }
    deque<ll> dq;
    dq.push_back(maxN);
    m[maxN]--;
    int grow_back = 1;
    for (int i = 0; i < N-1; i++) {
        if (grow_back) {
            if (dq[dq.size() - 1] % 3 == 0&& m[dq[dq.size() - 1] / 3] > 0) {
                dq.push_back(dq[dq.size() - 1] / 3);
                m[dq[dq.size() - 2] / 3]--;
            } else if (m[dq[dq.size() - 1] * 2] > 0) {
                dq.push_back(dq[dq.size() - 1] * 2);
                m[dq[dq.size() - 2] * 2]--;
            } else {
                grow_back = 0;
                i--;
            }
        } else {
            if (m[dq[0] * 3] > 0) {
                dq.push_front(dq[0] * 3);
                m[dq[1] * 3]--;
            } else if (dq[0] % 2 == 0 && m[dq[0] / 2] > 0) {
                dq.push_front(dq[0] / 2);
                m[dq[1] / 2]--;
            }
        }
    }
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }


}