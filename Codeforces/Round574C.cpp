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
    ll N;
    cin >> N;
    ll arr1[N];
    ll arr2[N];

    for (int i = 0; i < N; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> arr2[i];
    }

    ll dp[N+1][3];

    memset(dp, 0, sizeof(dp));
    ll maxHeight = 0;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = maxHeight;
        dp[i][1] = arr1[i-1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = arr2[i-1] + max(dp[i-1][0],dp[i-1][1]);
        maxHeight = max(maxHeight, max(dp[i][1], dp[i][2]));
    }
    cout << maxHeight;
}