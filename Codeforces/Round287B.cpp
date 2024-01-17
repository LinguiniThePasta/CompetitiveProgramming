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
    double r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    double dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

    int cnt = 0;
    if (dist != 0) {
        cnt++;
        dist -= r;

        cnt += (int)dist / (int)(2*r);
        double rem = dist / (2*r);
        rem -= (int)dist / (int)(2*r);
        if (rem > 0.5) {
            cnt++;
        }
    }
    cout << cnt;

}