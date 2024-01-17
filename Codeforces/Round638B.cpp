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
        ll N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        int maxSum = 0;
        int minSum = INT_MAX;


        for (int i = 0; i < N-K+1; i++) {
            int sum = 0;
            for (int j = i; j < i+K; j++) {
                sum += arr[j];
            }
            maxSum = max(maxSum, sum);
            minSum = min(minSum, sum);
        }
        int diff = maxSum - minSum;
        if (diff > 1) {
            cout << -1 << "\n";
            continue;
        } else {
            for (int i = 0; i < N-K+1; i++) {
                int sum = 0;
                for (int j = i; j < i+K; j++) {
                    sum += arr[j];
                }
                maxSum = max(maxSum, sum);
                minSum = min(minSum, sum);
            }
        }
    }
}