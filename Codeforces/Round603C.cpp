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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        set<ll> s;
        for (int i = 1; i <= sqrt(n); i++) {
            s.insert(n / i);
            s.insert(i);
        }
        s.insert(0);
        cout << s.size() << "\n";
        for (auto i = s.begin(); i != s.end(); i++) {
            cout << *i << " ";
        }
        cout << "\n";
    }


}