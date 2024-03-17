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
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll x, n;
        cin >> x >> n;
        ll ans = 0;
        for (ll i = 1; i*i <= x; i++) {
            if (x % i == 0) {
                if (x / i >= n) {
                    ans = max(ans, i);
                }
                if (i >= n) {
                    ans = max(ans, x/i);
                }
            }
        }
        cout << ans << "\n";
    }

}