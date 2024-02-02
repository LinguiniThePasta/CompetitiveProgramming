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
        ll N;
        cin >> N;
        string num;
        cin >> num;
        ll pref[num.size()+1];
        pref[0] = 0;
        for (int i = 1; i <= num.size(); i++) {
            pref[i] = pref[i-1] + (num[i-1] - '0');
        }
        ll cnt = 0;
        for (int i = 1; i <= num.size(); i++) {
            
        }
        cout << cnt << "\n";
    }
}