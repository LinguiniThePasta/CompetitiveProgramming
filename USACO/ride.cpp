/*
ID: your_id_here
LANG: C++
TASK: ride
*/
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <fstream>

using namespace std;
#define ll long long
int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string comet;
    fin >> comet;
    string group;
    fin >> group;
    ll cometConv = 1;
    ll groupConv = 1;
    for (int i = 0; i < comet.size(); i++) {
        cometConv *= (comet[i] - 'A' + 1);
        cometConv %= 47;
    }
    for (int i = 0; i < group.size(); i++) {
        groupConv *= (group[i] - 'A' + 1);
        groupConv %= 47;

    }
    cometConv %= 47;
    groupConv %= 47;
    if (cometConv == groupConv) {
        fout << "GO" << "\n";
    }
    else {
        fout << "STAY" << "\n";
    }
    return 0;
}
/*
2 2
1 10
3 10
 */