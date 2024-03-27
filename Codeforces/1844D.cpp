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

    ll j = 0;
    for (ll i = 2; i <= n+1; i++) {
        if (n % i) {
            j = i;
            break;
        }
    }
    ll i = 0;
    while (i < n) {
        for (ll k = 0; k < j; k++) {
            cout << (char)('a'+k);
            i++;
            if (i >= n) {
                break;
            }
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
