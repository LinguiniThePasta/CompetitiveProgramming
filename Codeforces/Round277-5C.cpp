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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m, s;
    cin >> m >> s;
    if (m * 9 < s || s == 0) {
        cout << "-1 -1";
        return 0;
    }
    string maxN = "";
    string minN = "";
    ll s2 = s;
    int f = 0;
    if (s2 < m) {
        s2--;
        f = 1;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 1; j < 10; j++) {
            if (s2 - j >= 0) {
                string tmp = minN;
                minN = j + '0';
                minN += tmp;
                s2 -= j;
                break;
            }
        }
        for (int k = 9; k >= 0; k--) {
            if (s - k >= 0) {
                maxN += k + '0';
                s -= k;
                break;
            }
        }
    }
    if (f) {
        string tmp = "1";
        minN.insert(minN.begin(), m-minN.size()-1, '0');
        tmp += minN;
        minN = tmp;
    }
    cout << minN << " " << maxN;
}