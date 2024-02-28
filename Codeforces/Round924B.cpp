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
        set<ll> a;
        for (int i = 0; i < n; i++) {
            ll tmp;
            cin >> tmp;
            a.insert(tmp);
        }
        ll b[a.size()];
        ll i = 0, j = 0;
        for (set<ll>::iterator it = a.begin(); it != a.end(); it++) {
            b[i] = *it;
            i++;
        }
        i = 0;
        ll ans = 0;
        while (j < sizeof(b)/sizeof(ll)) {
            if (b[j] - b[i] < n) {
                ans = max(ans, j - i + 1);
                j++;
            } else {
                i++;
            }
        }
        ans = max(ans, j - i);
        cout << ans << "\n";
    }
}