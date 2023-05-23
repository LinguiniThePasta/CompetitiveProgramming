#include <stdio.h>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
using namespace std;
int main() {
    int N;
    cin >> N;
    queue<int> playerA;
    queue<int> playerB;

    int K;
    cin >> K;
    while (K--) {
        int A;
        cin >> A;
        playerA.push(A);
    }
    cin >> K;
    while (K--) {
        int B;
        cin >> B;
        playerB.push(B);
    }

    int counter = 0;
    int maximum = 1;
    for (int i = 2; i <= N; i++) {
        maximum *= i;
    }

    while (counter < maximum && (playerA.size() && playerB.size())) {
        int A = playerA.front();
        int B = playerB.front();
        playerA.pop();
        playerB.pop();

        if (A < B) {
            playerB.push(A);
            playerB.push(B);
        }
        else {
            playerA.push(B);
            playerA.push(A);
        }

        counter++;
    }

    if (!playerA.size()) {
        cout << counter << " " << 2;
        return 0;
    }
    else if (!playerB.size()) {
        cout << counter << " " << 1;
        return 0;
    }
    cout << -1;
    return 0;
}