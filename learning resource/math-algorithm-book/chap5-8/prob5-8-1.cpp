#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int N, M;

vector<vector<int>> P(100005);

int main()
{
	cin >> N >> M;


	vector<int> dist(N + 1, -1);

	for (int i = 0; i < M; i++) {
		int a = 0, b = 0;

		cin >> a >> b;

		P[a].push_back(b);
		P[b].push_back(a);
	}

	queue<int> Q;

	Q.push(1);
	dist[1] = 0;

	while (!Q.empty()) {
		int pos = Q.front();

		Q.pop();

		for (int i = 0; i < P[pos].size(); i++) {
			int nex = P[pos][i];

			if (dist[nex] == -1) {

				if (dist[pos] + 1 > 120) {
					dist[nex] = dist[pos];
				}
				else {
					dist[nex] = dist[pos] + 1;
				}

				Q.push(nex);
			}
		}
	}

	for (int i = 1; i <= N; i++) {

		if (dist[i] == -1) {
			dist[i] = 120;
		}

		cout << dist[i] << endl;
	}

	return 0;
}

