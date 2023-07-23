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
    int N;
    cin >> N;
    vector<int> listA(N);
    for (int i = 0; i < N; i++) {
        cin >> listA[i];
    }

    sort(listA.begin(), listA.end());
    int j = N/2;
    int i = 0;
    int count = 0;

    while (i < N/2 && j < N) {
        if (listA[i] * 2 <= listA[j]) {
            i++;
            count++;

        }
        j++;
    }
    int ans = listA.size() - count;
    cout << ans << endl;
}
/*
2 2
1 10
3 10
 */