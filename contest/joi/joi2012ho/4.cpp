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

int main()
{
	int N = 0;
	int M = 0;


	cin >> N >> M;

	vector<int> A(M);
	vector<int> B(M);
	vector<int> X(M);
	vector<vector<int>> kugi(N + 1, vector<int>(N + 1, 0));

	for (int i = 0; i < M; i++)
		cin >> A[i] >> B[i] >> X[i];

	for (int i = 0; i < M; i++) {
		int diff[6][2] = { {0, 0}, {0, 1}, {X[i] + 1, 0}, {X[i] + 2, 1}, {X[i] + 1, X[i] + 2}, {X[i] + 2, X[i] + 2} };
		int one[6] = { 1, -1, -1, 1, 1 ,-1 };

		for (int j = 0; j < 6; j++) {
			int r = A[i] + diff[j][0];
			int c = B[i] + diff[j][1];

			if ((r >= 1 && r <= N) && (c >= 1 && c <= N))
				kugi[r][c] += one[j];
		}
	}

	//三角形累積和
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			kugi[r][c] += kugi[r][c - 1];
		}
	}

	for (int c = 1; c <= N; c++) {
		for (int r = 1; r <= N; r++) {
			kugi[r][c] += kugi[r - 1][c];
		}
	}

	int c;
	for (int r_s = N; r_s >= 2; r_s--) {
		c = 2;
		for (int r = r_s; r <= N; r++) {
			kugi[r][c] += kugi[r - 1][c - 1];
			c++;
		}
	}

	//答え算出
	int ans = 0;

	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			if (kugi[r][c] >= 1)
				ans++;
		}
	}

	cout << ans << endl;

	return 0;
}

