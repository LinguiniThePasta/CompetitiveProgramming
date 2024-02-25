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
        int item = sum/n;
        int accDiff = 0;
        int cont = 0;
        if (a[n-1] > a[0] || a[n-1] > item) {
            cout << "NO\n";
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] >= item) {
                accDiff += a[i] - item;
                a[i] -= a[i] - item;
            } else {
                int te = min(accDiff, item - a[i]);
                a[i] += te;
                accDiff -= te;
            }
            if (a[i] != item) {
                cout << "NO\n";
                cont = 1;
                break;
            }
        }
        if (cont) {
            continue;
        }
        if (accDiff > 0) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}