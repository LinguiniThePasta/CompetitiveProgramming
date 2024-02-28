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
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        pair<ll, ll> a[n];
        pair<ll, ll> b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i].second;
        }
        sort(a, a+n);
        for (int i = 0; i < n; i++) {
            cout << a[i].first << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << a[i].second << " ";
        }
        cout << "\n";
    }
}