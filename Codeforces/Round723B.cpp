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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        x %= 111;
        x %= 11;
        if (x != 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
}