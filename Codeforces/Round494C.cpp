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
    int n, k;
    cin >> n >> k;
    double a[n+1];
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        double tmp;
        cin >> tmp;
        a[i] = a[i-1] + tmp;
    }
    double ans = 0;
    for (int i = k; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            double sum = a[j + i - 1] - a[j-1];
            double avg = sum / i;
            ans = max(ans, avg);
        }
    }

    cout << setprecision(11) << ans;
}