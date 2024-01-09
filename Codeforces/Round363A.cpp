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
    int N;
    cin >> N;
    int dp[N+1][4];
    memset(dp, 0, sizeof(dp));
    int maxNoRest = 0;
    for (int i = 1; i <= N; i++) {
        int j;
        cin >> j;

        dp[i][0] = maxNoRest;
        if (j == 2 || j == 3) {
            dp[i][2] = max(dp[i-1][1], dp[i-1][0]) + 1;
            maxNoRest = max(dp[i][2], maxNoRest);
        }
        if (j == 1 || j == 3) {
            dp[i][1] = max(dp[i-1][2], dp[i-1][0]) + 1;
            maxNoRest = max(dp[i][1], maxNoRest);
        }
    }
    cout << N - maxNoRest;
}