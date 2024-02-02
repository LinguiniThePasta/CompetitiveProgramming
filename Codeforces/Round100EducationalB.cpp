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
        ll a[N];
        ll b[N];
        ll sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> a[i];
            sum += a[i];
        }
        ll avg = sum / N;
        for (int i = 0; i < N; i++) {
            if (a[i] == avg || a[i] == 1) {
                b[i] = a[i];
            } else {
                b[i] = (a[i] / avg) * avg;
                if (abs(a[i] - b[i]) >= abs(a[i] - b[i] - avg)) {
                    b[i] += avg;
                }
            }
            if (b[i] == 0) {
                b[i] = 1;
            }
            cout << b[i] << " ";
        }
        cout << "\n";

    }
}