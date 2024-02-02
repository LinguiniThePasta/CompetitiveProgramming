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
    ll N, L, R, X;
    cin >> N >> L >> R >> X;
    ll a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    ll cnt = 0;
    for (int i = 0; i < (1 << N); i++) {
        vector<ll> arr(0);
        for (int j = 0; j < N; j++) {
            int k = i >> j;
            if ((i >> j) % 2 != 0) {
                arr.push_back(a[j]);
            }
        }
        ll sum = 0;
        ll maxN = 0;
        ll minN = INT_MAX;
        for (int j = 0; j < arr.size(); j++) {
            sum += arr[j];
            maxN = max(maxN, arr[j]);
            minN = min(minN, arr[j]);
        }
        if (sum >= L && sum <= R && maxN - minN >= X) {
            cnt++;
        }
    }
    cout << cnt;

}