#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
using namespace std;

#define ll long long
int main() {
    int T;
    cin >> T;
    while (T--) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2 || y1 == y2) {
            cout << 1 << "\n";
            continue;
        }
        cout << abs(y2-y1) + abs(x2-x1) << "\n";
    }
}