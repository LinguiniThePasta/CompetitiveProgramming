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

        ll b = 0;
        ll annoying = 1;
        for (ll i = 1; i <= 57; i++) {
            set<ll> s;
            for (ll j = 0; j < n; j++) {
                s.insert(a[j]%(annoying<<i));
            }
            if (s.size() == 2) {
                b = i;
                break;
            }
        }
        cout << (annoying << b) << "\n";
    }

}