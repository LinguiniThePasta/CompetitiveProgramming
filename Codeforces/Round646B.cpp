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
int count(string a, int bit) {
    int cnt = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] - '0' == bit) {
            cnt++;
        }
    }
    return cnt;
}
int main() {
    ll T;
    cin >> T;
    while (T--) {
        int cnt = 0;
        string a;
        cin >> a;
        if (a.length() < 3) {
            cout << 0 << "\n";
            continue;
        }

    }

}