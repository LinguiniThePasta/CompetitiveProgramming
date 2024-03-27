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
int solve() {
    ll n, k;
    cin >> n >> k;
    if (k >= n - 1) {
        cout << 1;
        return 0;
    }
    cout << n;
    return 0;
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