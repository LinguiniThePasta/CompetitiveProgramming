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
//I figured it out, just had major implementation issues
int isPrime(int N) {
    for (int i = 2; i < (min(N, 50000)); i++) {
        if (N % i == 0) { return 0; }
    }
    return 1;
}

int main() {
    ll T;
    cin >> T;
    while (T--) {
        ll N;
        cin >> N;
        int lose = (N == 1);
        if (N > 2 && N % 2 == 0) {
            if ((N & (N - 1) )== 0) {
                lose = 1;
            } else if (N % 4 != 0 && isPrime(N / 2)) {
                lose = 1;
            }
        }
        if (lose) {
            cout << "FastestFinger\n";
        } else {
            cout << "Ashishgup\n";
        }
    }
}