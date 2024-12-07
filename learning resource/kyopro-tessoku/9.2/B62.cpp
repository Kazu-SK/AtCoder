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
vector<int> root;

void dfs(int pos, int n) {

    visited[pos] = true;

    root.push_back(pos);

    if (pos == n)
        return;

    for (int i = 0; i < Graph[pos].size(); i++) {

        if (visited[Graph[pos][i]] == false) {
            dfs(Graph[pos][i], n);
        }
    }

    if (root[root.size() - 1] != n)
        root.pop_back();

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


    dfs(1, N);

    for (int i = 0; i < root.size(); i++)
        cout << root[i] << " ";


    return 0;
}

