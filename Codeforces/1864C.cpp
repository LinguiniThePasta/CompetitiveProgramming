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
void solve() {
    ll n;
    cin >> n;
    ll pos = 1;
    ll p = 1;
    vector<int> a(0);
    a.push_back(n);
    for (ll i = 0; ; i++) {
        if ((n >> i) & 1) {
            if (n == (1 << i)) {
                p = i;
                break;
            }
            n -= (1 << i);
            a.push_back(n);
        }
    }
    while (p > 0) {
        n -= (1 << (p - 1));
        a.push_back(n);
        p--;
    }
    cout << a.size() <<"\n";
    for (auto &i : a) {
        cout << i << " ";
    }
    return;
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
