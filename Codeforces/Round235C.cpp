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
    ll N, M;
    cin >> N >> M;
    string l = "";
    if (M > 2 * (N+1) || N >= 2 + M) {
        cout << -1;
        return 0;
    }
    while (M != 0 || N != 0) {
        if (M - N >= 2) {
            if (N >= 1) {
                cout << "110";
                N--;
                M -= 2;
            } else {
                cout << "11";
                M -= 2;
            }
        } else if (M - N < 2 && M - N >= 0 ) {
            if (N >= 1 && M >= 1) {
                cout << "10";
                N--;
                M--;
            } else if (N < 1){
                cout << "1";
                M--;
            } else if (M < 1){
                cout << "0";
                N--;
            }
        } else {
            if (N >= 1 && M >= 1) {
                cout << "01";
                N--;
                M--;
            }  else {
                cout << "0";
                N--;
            }
        }
    }
    cout << "\n";
}