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
    return gcd(y, x%y);
}

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        a[i] -= a[0];
    }
    ll G = a[1];
    for (int i = 2; i < n; i++) {
        G = gcd(G, a[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        cout << gcd(G, a[0]+b[i]) << " ";
    }
}