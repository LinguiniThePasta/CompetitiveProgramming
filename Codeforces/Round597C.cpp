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
    string s;
    cin >> s;
    int l = 0, r = 0;
    char currentChar = '0';
    ll cnt = 1;
    while (r < s.size()) {
        if ((s[r] == 'u' || s[r] == 'n') && s[r] == currentChar) {
            r++;
        } else if ((s[r] == 'u' || s[r] == 'n') && currentChar == '0') {
            currentChar = s[r];
        } else {
            ll dist = r - l;
            r++;
            l = r;
            if (dist >= 2) {
                ll num = (dist - 1) * (dist - 2) / 2;
                num += 2;
                num %= 1000000007;
                cnt *= num;
            }
            if (s[r] == 'u' || s[r] == 'n') {
                currentChar = s[r];
            }
        }
    }
    ll dist = r - l;

    if (dist >= 2) {
        ll num = (dist - 1) * (dist - 2) / 2;
        num += 2;
        num %= 1000000007;
        cnt *= num;
    }
    cout << cnt;
}