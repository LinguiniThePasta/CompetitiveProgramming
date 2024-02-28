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
        ll x, y;
        cin >> x >> y;
        if (x % 2 == 0 && y % 2 == 0) {
            if (x / 2 != y || y / 2 != x) {
                cout << "yes\n";
                continue;
            }
        } else if (x % 2 == 1 && y % 2 == 0) {
            if (y / 2 != x) {
                cout << "yes\n";
                continue;
            }
        } else if (y % 2 == 1 && x % 2 == 0) {
            if (x / 2 != y) {
                cout << "yes\n";
                continue;
            }
        }
        cout << "no\n";

    }
}