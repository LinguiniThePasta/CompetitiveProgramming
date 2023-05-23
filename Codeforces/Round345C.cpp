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
    int N;
    cin >> N;
    vector<pair<int, int>> watchmen(N);
    for (int i = 0; i < N; i++) {
        int a,b;
        cin >> a >>b;
        watchmen[i] = make_pair(a,b);
    }

    int cnt = 0;
    map<pair<int, int>, int> coord;
    map<int, int> x;
    map<int, int> y;
    for (int i = 0; i < N; i++) {
        if (coord.count(watchmen[i])) {
            coord[watchmen[i]]++;
        } else {
            coord[watchmen[i]] = 0;
        }

        if (x.count(watchmen[i].first)) {
            x[watchmen[i].first]++;
        } else {
            x[watchmen[i].first] = 0;
        }

        if (y.count(watchmen[i].second)) {
            y[watchmen[i].second]++;
        } else {
            y[watchmen[i].second] = 0;
        }
    }

    for (auto it : coord) {
        cnt -= it.second;
    }
    for (auto it : x) {
        cnt += it.second;
    }
    for (auto it : y) {
        cnt += it.second;
    }
    cout << cnt;
}