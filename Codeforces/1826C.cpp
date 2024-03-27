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
    if (n >= 2 && n <= m) {
        cout << "NO";
        return;
    }
    ll j = 0;
    for (ll i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            j = i;
            break;
        }
    }
    if (j != 0 && m >= j) {
        cout << "NO";
        return;
    }
    cout << "YES";
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
