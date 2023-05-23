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
    ll N;
    cin >> N;
    map<ll, ll> factors;
    while (N % 2 == 0) {
        factors[2] = 1;
        N /= 2;
    }

    for(ll i = 3; i*i <= N; i += 2) {
        while (N % i == 0) {
            factors[i] = 1;
            N /= i;
        }
    }
    if (N > 2) {
        factors[N] = 1;
    }

    ll ans = 1;
    for (auto it : factors) {
        ans *= it.first;
    }
    cout << ans;
}