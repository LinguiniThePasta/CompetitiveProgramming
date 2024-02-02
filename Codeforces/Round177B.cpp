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
    ll N, M, D;
    cin >> N >> M >> D;
    ll matrix[N*M];
    ll invariant = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[M * i + j];
            if (invariant == 0) {
                invariant = matrix[M * i + j] % D;
            } else {
                if (matrix[M * i + j] % D != invariant) {
                    cout << -1;
                    return 0;
                }
            }

        }
    }
    ll minSum = INT_MAX;
    for (int i = 0; i < N*M; i++) {
        ll sum = 0;
        for (int j = 0; j < N*M; j++) {
            sum += abs(matrix[i] - matrix[j]);
        }
        sum /= D;
        minSum = min(minSum, sum);
    }
    cout << minSum;
}