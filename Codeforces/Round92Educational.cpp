#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
#include <set>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k, z;
        cin >> n >> k >> z;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll t = 0; t <= z; t++) {
            ll maxLoop = 0;
            ll sum = 0;
            for (int i = 0; i <= k - 2*t; i++) {
                sum += a[i];
                maxLoop = max(maxLoop, a[i] + a[i+1]);
            }
            ans = max(ans, sum + t * maxLoop);
        }
        cout << ans << "\n";
    }
}