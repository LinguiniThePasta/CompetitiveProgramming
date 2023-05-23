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
    ll a, b;
    cin >> a >> b;
    int N;
    cin >> N;
    ll gcdAB = __gcd(a, b);
    while (N--) {
        ll low, high;
        cin >> low >> high;
        int d = 0;
        for (int i = gcdAB; i >= 1; i--) {
            if (i < low) {
                break;
            }
            if (i > high) {
                continue;
            }
            if (gcdAB % i == 0 && (i <= high) && (i >= low)) {
                d = 1;
                cout << i << "\n";
                break;
            }
        }
        if (!d) {
            cout << -1 << "\n";
        }
    }
}