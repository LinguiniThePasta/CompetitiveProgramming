#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll N;
    cin >> N;
    map<ll, ll> m;
    for (int i = 0; i < N; i++) {
        ll tmp;
        cin >> tmp;
        m[tmp]++;
    }
    ll q;
    cin >> q;
    while (q--) {
        string change;
        cin >> change;
        ll x;
        cin >> x;
        if (change[0] == '-') {
            m[x]--;
        } else {
            m[x]++;
        }


        int numOfSqrs = 0;
        int numOfRect = 0;
        for (auto it = m.begin(); it != m.end(); it++) {
            if (it->second >= 8) {
                numOfSqrs += 2;
            } else if (it->second >= 6) {
                numOfSqrs++;
                numOfRect++;
            } else if (it->second >= 4) {
                numOfSqrs++;
            } else if (it->second >= 2) {
                numOfRect++;
            }
            if ((numOfSqrs >= 2) || (numOfSqrs == 1) && (numOfRect >= 2)) {
                break;
            }
        }
        if ((numOfSqrs >= 2) || (numOfSqrs == 1) && (numOfRect >= 2)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    };
}