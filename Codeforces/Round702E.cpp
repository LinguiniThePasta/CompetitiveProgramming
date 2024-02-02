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
    ll T;
    cin >> T;

    while (T--) {
        ll N;
        cin >> N;
        pair<ll,ll> arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].first;
            arr[i].second = i+1;
        }
        sort(arr, arr+N);
        ll pref[N+1];
        pref[0] = 0;
        for (int i = 1; i <= N; i++) {
            pref[i] = pref[i-1] + arr[i-1].first;
        }
        vector<ll> ans(0);
        for (int i = 1; i < N; i++) {
            if (pref[i] >= pref[i+1] - pref[i]) {
                ans.push_back(arr[i-1].second);
            }
        }
        ans.push_back(arr[N-1].second);
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}