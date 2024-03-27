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
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    ll isComp = 0;
    ll k = m;
    for (ll i = 2; i <= sqrt(m); i++) {
        if (m % i == 0) {
            isComp = 1;
        }
    }
    for (ll i = 0; i < n; i++) {
        for (ll j = 1; j <= m; j++) {
            a[i][j] = m * i + j;
        }
    }
    if (isComp) {
        for (ll i = 0; i < n; i++) {
            for (ll j = 1; j <= m; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        return;
    }
    for (ll i = 0; i < n/2; i++) {
        for (ll j = 1; j <= m; j++) {
            ll tmp = a[i][j];
            a[i][j] = a[2*i][j];
            a[2*i][j] = tmp;
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
