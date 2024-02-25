#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    map<ll, ll> m;
    ll maxA = 0;
    for (int i = 1; i <= n; i++) {
        ll tmp;
        cin >> tmp;
        m[tmp]++;
        maxA = max(maxA, m[tmp]);
    }
    cout << maxA;


}