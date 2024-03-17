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
ll binSearch(ll a, ll b, ll lo, ll hi) {
    ll ans = -1;
    while (lo <= hi) {
        ll mid = (lo + hi)/2;
        if (mid * b > a) {
            hi = mid - 1;
            ans = mid;
        } else if (mid * b < a) {
            lo = mid + 1;
        } else {
            ans = mid;
            break;
        }
    }
    return ans * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll year = 0;
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            ll tmp;
            cin >> tmp;
            year = binSearch(year+1, tmp, 1, 10e7);
        }
        cout << year << "\n";
    }

}