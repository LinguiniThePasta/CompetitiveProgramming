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
        int N;
        cin >> N;
        char a[N];
        int avg = 0;
        int cnt = 0;
        for (int i = 0; i < N; i++) {
            cin >> a[i];
            if (a[i] == '*') {
                avg += i;
                cnt++;
            }
        }
        avg /= cnt;
        int r = avg;
        int l = avg;

        if (a[avg + 1] == '*') {
            r = avg + 1;
        }
        if (a[avg - 1] == '*') {
            l = avg - 1;
        }
        int ans = 0;
        while (r - l + 1 < cnt) {
            int ir = INT_MAX;
            while (r + ir + 1 < N) {
                if (ir == INT_MAX) {
                    ir = 0;
                }
                if (a[r + ir + 1] == '*') {
                    break;
                }
                ir++;
            }
            int il = INT_MAX;
            while (l - il - 1 >= 0) {
                if (il == INT_MAX) {
                    il = 0;
                }
                if (a[l - il - 1] == '*' ) {
                    break;
                }
                il++;
            }

            if (a[r + ir + 1] == '*') {
                a[r + ir + 1] == '.';
                r++;
                a[r] = '*';
                ans += ir;
            } else if (a[l - il - 1] == '*'){
                a[l - il - 1] == '.';
                l--;
                a[l] = '*';
                ans += il;
            }
        }
        cout << ans << "\n";
    }
}