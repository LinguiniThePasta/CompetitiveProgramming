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
    ll a[n];
    set<ll> s;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans = __gcd(ans, abs(a[i] - a[n-i-1]));
    }
    cout << ans;
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
