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
        string b = "zzz";
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < 26; j++) {
                for (int k = 0; k < 26; k++) {
                    if (i + j + k + 3 == n) {
                        string a = "";
                        a += (char)(97+i);
                        a += (char)(97+j);
                        a += (char)(97+k);
                        if (checkIfSmaller(a,b)) {
                            b = a;
                        }
                    }
                }
            }
        }
        cout << b <<"\n";
    }
}