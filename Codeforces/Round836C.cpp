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
ll binSearch(ll hi, ll lo, ll i, set<ll> s) {
    ll mid = (hi + lo)/2;
    ll y = INT_MAX;
    while (hi >= lo) {
        ll ans = 0;
        ll mid = (hi + lo)/2;
        ans = mid * i;
        if (s.find(ans) == s.end()) {
            y = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        set<ll> s;
        ll a[n];
        s.insert(1);
        s.insert(x);
        a[0] = x;
        a[n-1] = 1;
        int ret = 0;
        for (int i = 2; i <= n-1; i++) {
            ll lo = 1;
            ll y;
            if (a[0] % i == 0 && a[0] != i) {
                ll hi = a[0]/i - 1;
                y = binSearch(hi, lo, i, s);
                lo = a[0]/i + 1;
                hi = n/i;
                y = min(y, binSearch(hi, lo, i, s));
            } else {
                ll hi = n/i;
                y = binSearch(hi, lo, i, s);
            }
            if (y == INT_MAX) {
                cout << -1 << "\n";
                ret = 1;
                break;
            } else {
                s.insert(y * i);
                a[i-1] = y * i;
            }
        }
        if (ret == 1) {
            continue;
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }


}