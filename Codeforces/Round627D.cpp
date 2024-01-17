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
    vector<pair<ll, ll>> arrA(N);
    for (int i = 0; i < N; i++) {
        cin >> arrA[i].second;
    }
    for (int i = 0; i < N; i++) {
        cin >> arrA[i].first;
    }
    int cnt = 0;
    sort(arrA.begin(), arrA.end());
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (arrA[i].first + arrA[j].first < arrA[i].second + arrA[j].second) {
                cnt++;
            }
        }
    }
    cout << cnt;
}