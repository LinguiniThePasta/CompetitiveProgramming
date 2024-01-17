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
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        map<int, int> m;
        map<int, int> maxN;
        int diff[n];
        memset(diff, 0, sizeof(diff));
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            //find smallest b larger than a that is a multiple of k that has not been taken
            int b = (a/k) * k;
            if (a % k != 0) {
                b += k;
            }
            if (m[b-a] != 0 && b - a != 0) {
                b = k + maxN[a];
            }
            m[b-a] = 1;
            maxN[a] = b;
            diff[i-1] = b - a;
        }
        sort(diff, diff + n);
        int sum = diff[0];
        for (int i = 1; i < n; i++) {
            sum += (diff[i] - diff[i-1]);
        }
        if (sum != 0) {
            cout << sum + 1 << "\n";

        } else {
            cout << sum<< "\n";

        }
    }
}