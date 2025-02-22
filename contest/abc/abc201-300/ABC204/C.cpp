
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


vector<vector<int>> Graph(10001);
bool visited[10001];

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
	}

	LL ans = 0;

	for (int n = 1; n <= N; n++) {

		dfs(n);

		for (int n = 1; n <= N; n++) {
			if (visited[n] == true) {
				ans++;
			}
		}

		for (int n = 1; n <= N; n++) {
			visited[n] = false;
		}
	}

	cout << ans << endl;

	return 0;
}

