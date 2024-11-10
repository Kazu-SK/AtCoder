#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

map<int, vector<int>> Graph;

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;

    vector<int> A(M);
    vector<int> B(M);
    vector<int> dist(N + 1, -1);

    queue<int> Q;

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];

        Graph[A[i]].push_back(B[i]);
        Graph[B[i]].push_back(A[i]);
    }

    Q.push(1);
    dist[1] = 0;


    while (!Q.empty()) {

        int pos = Q.front();

        Q.pop();

        for (int j = 0; j < Graph[pos].size(); j++) {

            int to = Graph[pos][j];

            if (dist[to] == -1) {
                dist[to] = dist[pos] + 1;
                Q.push(to);
            }
        }
    }


    for (int i = 1; i <= N; i++) {
        cout << dist[i] << endl;
    }

    return 0;
}

