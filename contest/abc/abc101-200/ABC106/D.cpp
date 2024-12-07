
/*********
p[i]からq[i]の区間に走る区間が完全に含まれる列車の本数
p[i] <= LjとRj <= q[i]が両方成り立つような列車jの本数

*********/

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

	vector<LL> L(M); //列車jのスタート地点
	vector<LL> R(M); //列車jの終点
	vector<LL> p(Q);
	vector<LL> q(Q);
	vector<LL> ans(Q, 0);
	vector<vector<LL>> train_sum(N + 2, vector<LL>(N + 2, 0));

	for (int j = 0; j < M; j++) {
		cin >> L[j] >> R[j];

		//L[j]からR[j]まで走る電車を1加算する。
		train_sum[L[j]][R[j]] += 1;
	}

	for (int i = 0; i < Q; i++) {
		cin >> p[i] >> q[i];
	}

	//二次元累積和の算出
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			train_sum[r][c] += train_sum[r][c - 1];
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

