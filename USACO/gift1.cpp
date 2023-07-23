/*
ID: your_id_here
LANG: C++
TASK: gift1
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
#include <map>

using namespace std;
#define ll long long
int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int N;
    fin >> N;
    map<string, int> dict;
    vector<string> keys(N);

    for (int i = 0; i < N; i++) {
        string name;
        fin >> name;
        keys[i] = name;
        dict[name] = 0;
    }
    for (int i = 0; i < N; i++) {
        string name;
        fin >> name;
        int amt, numberOfPpl;
        fin >> amt >> numberOfPpl;
        for (int j = 0; j < numberOfPpl; j++) {
            string givenName;
            fin >> givenName;
            dict[givenName] += amt / numberOfPpl;
        }
        if (numberOfPpl > 0) {
            dict[name] -= amt;
            dict[name] += amt % numberOfPpl;
        }
    }
    for (auto i : keys) {
        fout << i << " " << dict[i] << "\n";
    }
    return 0;
}
/*
2 2
1 10
3 10
 */