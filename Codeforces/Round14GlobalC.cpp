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
    ll T;
    cin >> T;
    while (T--) {
       ll N, M, X;
       cin >> N >> M >> X;
       pair<ll, ll> a[N];
       priority_queue<pair<ll, ll>> pq;
        for (ll i = 1; i <= M; i++) {
            pq.emplace(0, i);
        }
        for (ll i = 0; i < N; i++) {
            cin >> a[i].first;
            pair<ll,ll> d = make_pair(pq.top().first * -1, pq.top().second);
            pq.pop();
            d.first += a[i].first;
            a[i].second = d.second;
            pq.emplace(make_pair(-1 * d.first, a[i].second));
        }
        ll minV = INT_MAX;
        ll maxV = 0;

        while (!pq.empty()) {
            ll tmp = pq.top().first * (-1);
            maxV = max(tmp, maxV);
            minV = min(tmp, minV);
            pq.pop();
        }
        if (maxV - minV > X) {
            cout << "NO" << "\n";
            return 0;
        } else {
            cout << "YES" << "\n";
        }

        for (ll i = 0; i < N; i++) {
            cout << a[i].second << " ";
        }
        cout << "\n";
    }
}