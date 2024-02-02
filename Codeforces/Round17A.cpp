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
    ll i = 1;
    vector<ll> arr(0);
    while (i <= sqrt(N)) {
        if (N % i == 0) {
           arr.push_back(i);
        }
        i++;
    }

    double t = N;
    double l = abs(sqrt(t) - (ll)sqrt(N));
    if (l > 0.001 ) {
        if (K > 2 * arr.size()) {
            cout << -1;
            return 0;
        }
        if (K < arr.size()) {
            cout << arr[K-1];
            return 0;
        }
        cout << N / arr[arr.size() * 2 - K];
    } else {
        if (K >= 2 * arr.size()) {
            cout << -1;
            return 0;
        }
        if (K < arr.size()) {
            cout << arr[K - 1];
            return 0;
        }
        cout << N / arr[arr.size() * 2 - K + 1];
    }
}