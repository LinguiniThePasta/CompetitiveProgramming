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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        if (a[0] != a[1]) {
            cout << "YES\n";
            continue;
        }
        int c = 0;
        for (ll i = 1; i < n; i++) {
            if (a[i] % a[0] != 0) {
                c = 1;
            }
        }
        if (c) {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}