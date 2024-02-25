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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> a(0);
    vector<ll> b(0);
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0 && n / i != i) {
            a.push_back(i);
            b.push_back(n / i);
        } else if (n % i == 0) {
            a.push_back(i);
        }
    }
    if (k > a.size() + b.size()) {
        cout << -1;
        return 0;
    }
    if (k <= a.size()) {
        cout << a[k-1];
    } else {
        cout << b[b.size() - (k - a.size())];
    }
}