#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <stack>
using namespace std;
#define ll long long
int main() {
    string s;
    stack<char> stack1;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (stack1.size() == 0) {
            stack1.push(s[i]);
        } else {
            if (s[i] == '(') {
                stack1.push(s[i]);
            } else {
                if (stack1.top() == '(') {
                    stack1.pop();
                } else {
                    stack1.push(s[i]);
                }
            }
        }
    }
    cout << s.size() - stack1.size();
}