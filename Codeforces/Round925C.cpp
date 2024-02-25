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
int checkIfSmaller(string a, string b) {
    return a <= b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int i = 0;
        int j = n-1;
        int breaki = 0;
        int breakj = 0;
        while (i < j) {
            if (a[i+1] == a[i]) {
                i++;
            } else {
                breaki = 1;
            }
            if (a[j-1] == a[j]) {
                j--;
            } else {
                breakj = 1;
            }
            if (breakj && breaki) {
                break;
            }
        }
        int ans = 0;
        if (i != j) {
            if (a[j] == a[i]) {
                ans = n - j + i + 1;
            } else {
                ans = max(n - j, i + 1);
            }
            ans = n - ans;
        } else {
            ans = 0;
        }
        cout << ans << "\n";

    }
}
