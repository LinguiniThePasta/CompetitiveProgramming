#include <stdio.h>
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
ll gcd(ll a, ll b) {
    if (!b) {
        return abs(a);
    }
    return gcd(abs(b), abs(a%b));
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        ll maxN = INT_MIN;
        set<ll> s;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
            maxN = max(a[i], maxN);
        }
        ll x = 0;
        for (ll i = 0; i < n-1; i++) {
            x = gcd(a[i+1] - a[i], x);
        }
        x = max(x, (ll)1);
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            sum += a[i];
        }
        ll k = 0;
        while (s.find(maxN - k*x) != s.end()) {
            k++;
        }
        ll ans = maxN * (n+1) - (sum + maxN - k*x);
        cout << ans / x << "\n";
    }

}