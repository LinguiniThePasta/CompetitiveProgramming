#include <stdio.h>
#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    set<ll> s;
    map<ll, ll> m;
    for (ll i = 2; i <= sqrt(n); i++) {
        if (n%i == 0) {
            s.insert(i);
            m[i]++;
            n /= i;
        }
    }
    bool rep = 1;
    ll ans = 0;
    while (rep) {
        rep = 0;
        ll b = 1;
        for (auto &i : s) {
            if (m[i] == 0) {
                continue;
            }
            b *= i;
            m[i]--;
        }
    }

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }

}
