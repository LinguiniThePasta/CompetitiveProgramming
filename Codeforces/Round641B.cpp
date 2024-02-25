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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n+1];
        ll b[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = 0;
        }
        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            ll maxLength = 0;
            for (int j = 1; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    if ( a[i / j] < a[i]) {
                        maxLength = max(maxLength, b[i/j]);
                    }
                    if (a[j] < a[i]) {
                        maxLength = max(maxLength, b[j]);
                    }
                }
            }
            b[i] = maxLength + 1;
            ans = max(ans, b[i]);
        }
        cout << ans << "\n";
    }
}