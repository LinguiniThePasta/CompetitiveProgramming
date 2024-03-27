#include <stdio.h>
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
void findPrimeFactors(map<ll, ll> &m, ll x) {
    int i = 2;
    while(i * i <= x){
        while (x % i == 0){
            m[i]++;
            x /= i;
        }
        i++;
    }
    if(x > 1) m[x]++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n];
        map<ll, ll> m;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            findPrimeFactors(m, a[i]);
        }
        int failed = 0;
        for (auto & it : m) {
            if (it.second % n != 0) {
                cout << "NO\n";
                failed = 1;
                break;
            }
        }
        if (failed) {
            continue;
        }
        cout << "YES\n";
    }

}