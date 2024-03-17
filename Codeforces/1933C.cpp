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
        ll a, b, l;
        cin >> a >> b >> l;

        set<ll> ans;
        for (ll i = 0; i <= 40; i++) {
            ll m = l;
            bool skip = false;
            for (ll x = 0; x < i; x++) {
                if (m % a) {
                    skip = true;
                    break;
                }
                m /= a;
            }
            if (skip) {
                break;
            }
            while (1) {
                ans.insert(m);
                if (m % b) break;
                m /= b;
            }
        }
        cout << ans.size() << "\n";
    }

}