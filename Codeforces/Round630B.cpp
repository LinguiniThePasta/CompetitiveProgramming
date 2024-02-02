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
        ll a[N];
        ll b[N];
        int primes[11] = {2,3,5,7,11,13,17,19,23, 29, 31};
        memset(b, 0, sizeof(b));
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        ll colN = 0;
        for (int i = 0; i < 11; i++) {
            int addCol = 0;
            for (int j = 0; j < N; j++) {
                if (a[j] % primes[i] == 0 && b[j] == 0) {
                    b[j] = primes[i];
                    addCol = 1;
                }
            }
            if (addCol) {
                colN++;
            }
        }
        cout << colN << "\n";
        for (int i = 0; i < N; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}