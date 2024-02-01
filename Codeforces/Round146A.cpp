#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

#define ll long long
int prime(int N) {
    for (int i = sqrt(N);i > 1; i--) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int N;
    cin >> N;
    set<int> a;
    for (ll temp = N; temp >= 2; temp--) {
        int hi = 20;
        int lo = 0;
        int exp = (hi+lo)/2;
        while (hi > lo) {
            ll power = pow(temp, exp);
            if (power > 0 && power > N) {
                hi = exp-1;
            } else if (power > 0 && power < N){
                lo = exp+1;
            } else if (power > 0 && power == N){
                break;
            } else {
                hi = exp-1;
            }
            exp = floor((hi + lo)/2);
        }
        a.insert(pow(temp, exp));
    }
    reverse_iterator it = a.rbegin();
    int cnt = 0;
    ll pro = 1;
    while (it != a.rend() && cnt < 3) {
        pro *= *it;
        cnt++;
        --it;
    }
    cout << pro;

}