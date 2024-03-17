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
        ll n, m;
        cin >> n >> m;
        ll ans = m/2 * n;
        cout << ans << "\n";
    }
}