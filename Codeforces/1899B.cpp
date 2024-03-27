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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        ll ans = 0;
        for (ll i = 1; i <= sqrt(n); i++) {
            if (n%i==0) {
                ll maxN = 0;
                ll minN = LLONG_MAX;

                for (ll j = 0; j < n/i; j++) {
                    ll sum = 0;
                    for (ll k = 0; k < i; k++) {
                        sum += a[j*i + k];
                    }
                    maxN = max(sum, maxN);
                    minN = min(sum, minN);
                }
                ll maxN2 = 0;
                ll minN2 = LLONG_MAX;
                for (ll j = 0; j < i; j++) {
                    ll sum = 0;
                    for (ll k = 0; k < (n/i); k++) {
                        sum += a[j*(n/i) + k];
                    }
                    maxN2 = max(sum, maxN2);
                    minN2 = min(sum, minN2);
                }
                ans = max(maxN - minN, ans);
                ans = max(maxN2 - minN2, ans);
            }
        }
        cout << ans << "\n";
    }

}