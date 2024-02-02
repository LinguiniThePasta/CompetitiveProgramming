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
    ll T;
    cin >> T;
    while (T--) {
        ll A, B, K;
        cin >> A >> B >> K;
        map<ll, ll> b;
        map<ll, ll> g;
        for (int i = 0; i < K; i++) {
            ll temp;
            cin >> temp;
            b[temp]++;
        }
        for (ll i = 0; i < K; i++) {
            ll temp;
            cin >> temp;
            g[temp]++;
        }
        if (K < 2) {
            cout << 0 << "\n";
            continue;
        }
        ll cnt = 0;
        for (auto &it : b) {
            cnt += it.second - 1;
        }
        for (auto &it : g) {
            cnt += it.second - 1;
        }
        cnt = K * (K-1)/2 - cnt;
        cout << cnt << "\n";
    }
}