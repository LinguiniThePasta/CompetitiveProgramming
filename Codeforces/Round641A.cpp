#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
#include <set>
using namespace std;
#define ll long long
ll gcd(ll x, ll y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main() {
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int pre[N+1];
    int suf[N+1];
    pre[0] = a[0];
    suf[N] = a[N-1];
    for (int i = 1; i <= N; i++) {
        pre[i] = gcd(pre[i-1], a[i]);
    }
    for (int i = N-1; i >= 1; i--) {
        suf[i] = gcd(suf[i+1], a[i]);
    }
    ll lcm = suf[1];
    for (int i = 1; i < N-1; i++) {
        lcm = lcm * gcd(pre[i-1], suf[i+1]) / gcd(lcm,gcd(pre[i-1], suf[i+1]));
    }
    lcm = lcm * pre[N-1] / gcd(lcm, pre[N-1]);
    cout << lcm;
}