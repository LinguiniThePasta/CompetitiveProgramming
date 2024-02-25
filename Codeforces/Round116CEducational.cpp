#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        k++;

        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int i = 0;
        string ansS = "";
        while (k && i < n) {
            ll ans = 0;
            if (i < n - 1) {
                int change = a[i+1] - a[i];
                ll f = pow(10, change) - 1;
                ans += min(k, f);
                k -= min(k, f);
            } else {
                ans += k;
                k = 0;
            }
            string tmp = "";
            tmp += to_string(ans);
            tmp += ansS;
            ansS = tmp;
            i++;
        }
        cout << ansS << "\n";
    }


}