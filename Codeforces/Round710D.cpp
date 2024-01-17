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
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        map<ll, ll> m;
        ll maxV = 0;
        while (n--) {
            ll i;
            cin >> i;
            m[i]++;
            maxV = max(maxV, i);
        }

    }
}