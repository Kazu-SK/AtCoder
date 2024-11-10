/***************************

深さ優先探索


頂点数N, 辺数Mのグラフが与えられ、
グラフ全体が連結であるかどうかを判定する。

下記のプログラムでは
i+1番目の辺は頂点A[i]とB[i]を結んでいる。

****************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


map<int, vector<int>> Graph;
map<int, bool> visited;

void dfs(int pos) {

    visited[pos] = true;

    for (int i = 0; i < Graph[pos].size(); i++) {

        if (visited[Graph[pos][i]] == false) {
            dfs(Graph[pos][i]);
        }
    }

    return;
}

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;


    vector<int> A(M);
    vector<int> B(M);

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];

        Graph[A[i]].push_back(B[i]);
        Graph[B[i]].push_back(A[i]);
    }

    dfs(1);

    bool ans = true;

    for (int n = 1; n <= N; n++) {
        if (visited[n] == false) {
            ans = false;
            break;
        }
    }

    if (ans)
        cout << "The graph is connected." << endl;
    else
        cout << "The graph is not connected." << endl;


    return 0;
}

