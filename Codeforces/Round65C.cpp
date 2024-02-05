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
ll DFS(map<ll, vector<ll>> graph,  ll visited[], ll start, ll num) {
    if (graph[start].size() == 0) {
        return num;
    }

    for (int i = 0; i < graph[start].size(); i++) {
        ll node = graph[start][i];
        if (!visited[node]) {
            visited[node] = 1;
            num = DFS(graph, visited, node, num);
        }
    }
    return num + 1;
}


int main() {
    ll N, M;
    cin >> N >> M;
    map<ll, vector<ll>> graph;
    ll visited[N];
    for (int i = 0; i < M; i++) {
        ll k;
        cin >> k;
        while (k--) {
            ll tmp;
            cin >> tmp;
            graph[i].push_back(tmp);
            graph[tmp].push_back(i);
        }
    }

    for (int i = 0; i < M; i++) {
        ll num = 0;
        memset(visited, 0, sizeof(visited));
        num = DFS(graph, visited, i, num);
        cout << num << " ";
    }
}