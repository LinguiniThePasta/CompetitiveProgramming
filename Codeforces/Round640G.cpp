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
        if (N < 4) {
            cout << -1 << "\n";
            continue;
        }
        ll size = N;
        int a[N];
        int dec = 1;
        if (N % 2 == 0) {
            N -= 1;
        }
        int i = 0;
        while (i < size) {
            a[i] = N;
            if (dec) {
                if (N - 2 < 1) {
                    dec = 0;
                    N += 3;
                    i++;
                    a[i] = N;
                    i++;
                    a[i] = 2;
                    i++;
                    N += 2;
                    continue;
                }
                N -= 2;
            } else {
                N += 2;
            }
            i++;
        }
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}