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
    ll T;
    cin >> T;
    while (T--) {
        ll N, X;
        cin >> N >> X;
        ll a[N];
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        sort(a, a+N);
        pair<ll, ll> dp[N+1];
        memset(dp, 0, sizeof(dp));
        dp[0].second = 1;
        ll cnt = 0;
        ll reset = 0;
        for (int i = 1; i <= N; i++) {
            if (reset) {
                dp[i].first = a[i-1];
                dp[i].second = 1;
                reset = 0;
            } else {
                dp[i].first = max(dp[i-1].first + dp[i - dp[i-1].second].first, a[i-1]);
            }
            if (dp[i].first == dp[i-1].first + dp[i - dp[i-1].second].first) {
                dp[i].second = dp[i-1].second + 1;
            } else {
                dp[i].second = 1;
            }
            if (dp[i].first >= X) {
                cnt++;
                reset = 1;
            }
        }
        cout << cnt << "\n";

    }
}