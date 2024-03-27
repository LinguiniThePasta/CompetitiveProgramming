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
void solve() {
    ll n;
    cin >> n;
    set<ll> s;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        s.insert(tmp);
        m[tmp]++;
    }
    map<ll,ll> b;
    ll maxVal = 0;
    for (auto &i : s) {
        ll k = 1;
        while (i * k <= n) {
            b[i * k] += m[i];
            k++;
        }
    }
    for (auto &i : b) {
        maxVal = max(maxVal, i.second);
    }
    cout << maxVal;
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
