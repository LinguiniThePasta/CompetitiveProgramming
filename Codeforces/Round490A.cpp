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
    ll n, k;
    cin >> n >> k;
    int a[n+2];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    a[n+1] = 0;
    ll i = 0;
    ll j = n;
    while (a[i] <= k && i < n) {
        i++;
    }
    while (a[j] <= k && j > i) {
        j--;
    }
    j = n - j;
    cout << i + j;


}