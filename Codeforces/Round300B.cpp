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
    string N;
    cin >> N;
    ll num = 0;
    int maxDig = 0;
    for (int i = 0; i < N.size(); i++) {
        maxDig = max(N[i] -'0', maxDig);
        num *= 10;
        num += N[i] -'0';
    }
    cout << maxDig << "\n";
    for (int i = 0; i < maxDig; i++) {
        ll ans = 0;
        for (int j = 0; j < N.size(); j++) {
            ans *= 10;
            if (N[j] - '0' >= 1) {
                ans += 1;
                N[j] -= 1;
            } else {
                ans += 0;
            }
        }
        cout << ans << " ";
    }
}