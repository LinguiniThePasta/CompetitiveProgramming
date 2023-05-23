#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
using namespace std;

#define ll long long
int main() {
    int q;
    cin >> q;
    if (q == 1 || q == 2) {
        cout << 1 << "\n" << 0;
        return 0;
    }

    int temp = q;
    vector<int> factors(0);
    while (q % 2 == 0) {
        factors.push_back(2);
        q /= 2;
    }

    for (int i = 3; i * i <= q; i++) {
        while (q % i == 0) {
            factors.push_back(i);
            q /= i;
        }
    }

    if (q != temp && q != 1) {
        factors.push_back(q);
    }

    if (q == temp) {
        cout << 1 << "\n" << 0;
        return 0;
    }

    if (factors.size() >= 3) {
        cout << 1 << "\n";
        if (factors.size() % 2) {
            cout << temp / factors[0];
        }
        else {
            cout << temp / (factors[0] * factors[1]);
        }
        return 0;
    }
    cout << 2;
    return 0;

}