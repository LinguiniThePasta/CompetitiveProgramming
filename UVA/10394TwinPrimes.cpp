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
    ll N;
    while ((cin >> N)) {
        int counter = 0;
        int number = 3;
        int originalNum = number;

        while (counter != N) {
            int temp = originalNum + 2;
            int tempT = temp;
            while (originalNum % 2 == 0) {
                originalNum /= 2;
            }

            for(ll i = 3; i*i <= originalNum; i += 2) {
                while (originalNum % i == 0) {
                    originalNum /= i;
                }
            }
            if (originalNum > 2) {
                while (temp % 2 == 0) {
                    temp /= 2;
                }

                for(ll i = 3; i*i <= temp; i += 2) {
                    while (temp % i == 0) {
                        temp /= i;
                    }
                }
                if (temp > 2) {
                    counter++;
                    originalNum = temp;
                } else {
                    originalNum += 2;
                }
            } else {
                originalNum = temp;
            }
        }
        cout << originalNum;

    }

}