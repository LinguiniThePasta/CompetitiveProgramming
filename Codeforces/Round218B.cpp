#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

#define ll long long
int main() {
    int A, B;
    cin >> A >> B;
    ll gcd = __gcd(A, B);
    ll counter = 0;
    while (A != B) {
        if (A > B) {
            ll diff = INT32_MAX;
            ll divideBy = 0;
            if (A % 5 == 0) {
                if (A / 5 - gcd < diff && A / 5 >= gcd) {
                    divideBy = 5;
                    diff = A / 5 - gcd;
                }
            }
            if (A % 3 == 0) {
                if (A / 3 - gcd < diff && A / 3 >= gcd) {
                    divideBy = 3;
                    diff = A / 3 - gcd;
                }
            }
            if (A % 2 == 0) {
                if (A / 2 - gcd < diff && A / 2 >= gcd) {
                    divideBy = 2;
                    diff = A / 2 - gcd;
                }
            }
            if (divideBy == 0) {
                if (A != gcd) {
                    cout << -1;
                    return 0;
                }
                else {
                    continue;
                }
            }
            A /= divideBy;

        }
        else {
            ll diff = INT32_MAX;
            ll divideBy = 0;
            if (B % 5 == 0) {
                if (B / 5 - gcd < diff && B / 5 >= gcd) {
                    divideBy = 5;
                    diff = B / 5 - gcd;
                }
            }
            if (B % 3 == 0) {
                if (B / 3 - gcd < diff && B / 3 >= gcd) {
                    divideBy = 3;
                    diff = B / 3 - gcd;
                }
            }
            if (B % 2 == 0) {
                if (B / 2 - gcd < diff && B / 2 >= gcd) {
                    divideBy = 2;
                    diff = B / 2 - gcd;
                }
            }
            if (divideBy == 0) {
                if (B != gcd) {
                    cout << -1;
                    return 0;
                }
                else {
                    continue;
                }
            }
            B /= divideBy;
        }
        counter++;


    }
    cout << counter;
}