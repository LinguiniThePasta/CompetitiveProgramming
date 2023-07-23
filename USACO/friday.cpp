/*
ID: your_id_here
LANG: C++
TASK: friday
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
//#define fin cin
//#define fout cout
int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int N;
    fin >> N;
    ll numDays = 13;
    int daysPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days[] = {0, 0, 0, 0, 0, 1, 0};


    for (int i = 1900; i < 1900 + N; i++) {
        int leap = 0;
        if (i % 100 == 0) {
            if (i % 400 == 0) {
                leap = 1;
            }
        }
        else if (i % 4 == 0) {
            leap = 1;
        }
        for (int j = 0; j < 12; j++) {
            if (i == 1900 && j == 0) {
                continue;
            }
            if (leap) {
                if (j == 2) {
                    numDays += 29;
                } else {
                    if (j == 0) {
                        numDays += daysPerMonth[11];
                    }
                    else {
                        numDays += daysPerMonth[j-1];
                    }
                }
            }
            else {
                if (j == 0) {
                    numDays += daysPerMonth[11];
                }
                else {
                    numDays += daysPerMonth[j-1];
                }
            }
            int day = numDays % 7;
            if (day == 0) {
                days[6]++;
            } else {
                days[day - 1]++;

            }

        }
    }

    for (int i = 5; i <= 6; i++) {
        fout << days[i] << " ";
    }
    for (int i = 0; i < 4; i++) {
        fout << days[i] << " ";
    }
    fout << days[4];
    fout << "\n";
    return 0;
}
/*
2 2
1 10
3 10
 */