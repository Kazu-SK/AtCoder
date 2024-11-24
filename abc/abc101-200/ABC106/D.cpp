#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	int N = 0, M = 0, Q = 0;


	cin >> N >> M >> Q;

	vector<LL> L(M);
	vector<LL> R(M);
	vector<LL> p(Q);
	vector<LL> q(Q);
	vector<LL> ans(Q, 0);
	vector<vector<LL>> train_info(N + 2, vector<LL>(N + 2, 0));
	vector<vector<LL>> train_sum(N + 2, vector<LL>(N + 2, 0));

	for (int i = 0; i < M; i++) {
		cin >> L[i] >> R[i];

		train_info[L[i]][R[i]] += 1;
	}

	for (int i = 0; i < Q; i++) {
		cin >> p[i] >> q[i];
	}

	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			train_sum[r][c] += train_sum[r][c - 1] + train_info[r][c];
		}
	}

	for (int c = 1; c <= N; c++) {
		for (int r = 1; r <= N; r++) {
			train_sum[r][c] += train_sum[r - 1][c];
		}
	}

	for (int i = 0; i < Q; i++) {
		ans[i] = train_sum[q[i]][q[i]] - train_sum[p[i] - 1][q[i]] - train_sum[q[i]][p[i] - 1] + train_sum[p[i] - 1][p[i] - 1];
	}

	for (int i = 0; i < Q; i++) {
		cout << ans[i] << endl;
	}

	return 0;
}

