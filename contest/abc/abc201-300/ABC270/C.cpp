

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


vector<vector<int>> Graph(200001);
bool visited[200001];
vector<int> pass;
bool ans_found;

int X = 0, Y = 0;

void dfs(int pos) {

	visited[pos] = true;

	if(ans_found == false)
		pass.push_back(pos);

	if (pos == Y) {
		ans_found = true;
		return;
	}

	if (ans_found)
		return;

	for (int i = 0; i < Graph[pos].size(); i++) {

		if (visited[Graph[pos][i]] == false) {
			dfs(Graph[pos][i]);
		}

		if (ans_found)
			return;
	}

	pass.pop_back();

	return;
}

int main()
{
	int N = 0;


	cin >> N >> X >> Y;


	vector<int> U(N - 1);
	vector<int> V(N - 1);

	for (int i = 0; i < N - 1; i++) {
		cin >> U[i] >> V[i];

		Graph[U[i]].push_back(V[i]);
		Graph[V[i]].push_back(U[i]);
	}

	dfs(X);

	for (int i = 0; i < pass.size(); i++) {
		cout << pass[i] << " ";
	}

	return 0;
}

