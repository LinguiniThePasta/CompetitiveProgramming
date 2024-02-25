#include <cstdio>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, t;
    cin >> n >> t;
    ll a[31];
    for (int i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        a[__builtin_ctz(tmp)]++;
    }
    while (t--) {
        ll q;
        cin >> q;
        ll ans = 0;
        for (int i = 30; i >= 0; i--) {
            ll amt = min(q >> i, a[i]);
            ans += amt;
            q -=  amt * (1 << i);
        }
        if (q != 0) {
            cout << -1 << "\n";
            continue;
        }
        cout << ans << "\n";
    }
}