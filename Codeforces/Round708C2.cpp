#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll T;
    cin >> T;
    while (T--) {
        double N, K;
        cin >> N >> K;
        while (K - 1 <= N / 2) {
            cout << (ll) N / 2 << " ";
            N -= (ll) N / 2;
            K--;
        }
        cout << "\n";
        continue;
        while ((ll)N % (ll)K != 0) {
            cout << 1 << " ";
            N--;
            K--;
        }
        for (int i = 0; i < (ll)K; i++) {
            cout << (ll)N / (ll)K << " ";
        }
        cout << "\n";
    }
}