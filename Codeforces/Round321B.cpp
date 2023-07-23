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
    ll N, D;
    cin >> N >> D;
    vector<pair<ll,ll>> listA(N);
    for (int i = 0; i < N; i++) {
        cin >> listA[i].first >> listA[i].second;
    }
    sort(listA.begin(),listA.end());
    vector<ll> listB(N+1);
    for (ll i = 0; i < N; i++) {
        listB[i+1] = listB[i] + listA[i].second;
    }
    ll l = 0;
    ll r = 0;
    ll ans = 0;
    while (r < N) {
        if (listA[r].first - listA[l].first < D) {
            ans = max(ans, listB[r+1] - listB[l]);
            r++;
        } else {
            l++;
        }
    }
    cout << ans;
}
/*
2 2
1 10
3 10
 */