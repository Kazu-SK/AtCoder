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
	int N = 0;


	cin >> N;

	const int RANGE = 1500;
	const int SUM_RANGE = RANGE + 2;

	vector<LL> A(N);
	vector<LL> B(N);
	vector<LL> C(N);
	vector<LL> D(N);
	vector<vector<LL>> paper_sum(SUM_RANGE, vector<LL>(SUM_RANGE, 0));
	LL ans = 0;

	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i] >> C[i] >> D[i];

		//(A,B),(C,D)が紙の隅のマスをさしている場合
		/*
		paper_sum[A[i]][B[i]] += 1;
		paper_sum[C[i] + 1][D[i] + 1] += 1;
		paper_sum[A[i]][D[i] + 1] -= 1;
		paper_sum[C[i] + 1][B[i]] -= 1;
		*/

		//(A,B),(C,D)が紙の角の座標を示している場合
		paper_sum[A[i]][B[i]] += 1;
		paper_sum[C[i]][D[i]] += 1;
		paper_sum[A[i]][D[i]] -= 1;
		paper_sum[C[i]][B[i]] -= 1;
	}

	//(A,B),(C,D)が紙の隅のマスをさしている場合
	/*
	for (int r = 0; r < SUM_RANGE; r++) {
		for (int c = 1; c < SUM_RANGE; c++) {
			paper_sum[r][c] += paper_sum[r][c - 1];
		}
	}

	for (int c = 0; c < SUM_RANGE; c++) {
		for (int r = 1; r < SUM_RANGE; r++) {
			paper_sum[r][c] += paper_sum[r - 1][c];
		}
	}
	*/

	//(A,B),(C,D)が紙の角の座標を示している場合
	for (int r = 0; r <= RANGE; r++) {
		for (int c = 1; c <= RANGE; c++) {
			paper_sum[r][c] += paper_sum[r][c - 1];
		}
	}

	for (int c = 0; c <= RANGE; c++) {
		for (int r = 1; r <= RANGE; r++) {
			paper_sum[r][c] += paper_sum[r - 1][c];
		}
	}

	//紙が1枚以上置かれている箇所の面積
	for (int r = 0; r <= RANGE; r++) {
		for (int c = 0; c <= RANGE; c++) {
			if (paper_sum[r][c] >= 1) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}

