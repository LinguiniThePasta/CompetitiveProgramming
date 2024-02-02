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
    ll N, K;
    cin >> N >> K;
    ll dp[K][N + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= N; i++) {
        dp[0][i] = 1;
    }
    for (int i = 1; i < K; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = j; k <= N; k += j) {
                dp[i][j] += (dp[i-1][k] % 1000000007);
            }
        }
    }
    ll sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += dp[K-1][i] % 1000000007;
    }
    sum %= 1000000007;
    cout << sum;
}