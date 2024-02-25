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
    int n;
    cin >> n;
    ll c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string prev = a[0];
    ll dp[n][2];
    dp[0][0] = 0;
    dp[0][1] = c[0];

    reverse(prev.begin(), prev.end());
    for (int i = 1; i < n; i++) {
        string cur = a[i];
        reverse(cur.begin(), cur.end());
        dp[i][0] = 1e18;
        dp[i][1] = 1e18;
        if (a[i] >= a[i-1]) {
            dp[i][0] = dp[i-1][0];
        }
        if (a[i] >= prev) {
            dp[i][0] = min(dp[i][0], dp[i-1][1]);
        }
        if (cur >= a[i-1]) {
            dp[i][1] = dp[i-1][0] + c[i];
        }
        if (cur >= prev) {
            dp[i][1] = min(dp[i][1], dp[i-1][1] + c[i]);
        }
        prev = cur;
        if (min(dp[i][0], dp[i][1]) < 0 || min(dp[i][0], dp[i][1]) >= 1e18) {
            cout << -1;
            return 0;
        }
    }
    cout << min(dp[n-1][0], dp[n-1][1]);
}