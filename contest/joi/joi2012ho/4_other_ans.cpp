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

	for (int i = 0; i < M; i++) {
		cin >> A[i] >> B[i] >> X[i];
		kugi[A[i]][B[i]] = X[i] + 1;
	}

	for (int r = 2; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			kugi[r][c] = max(kugi[r][c], kugi[r - 1][c] - 1);
			kugi[r][c] = max(kugi[r][c], kugi[r - 1][c - 1] - 1);
		}
	}

	int ans = 0;
	for (int r = 1; r <= N; r++) {
		for (int c = 1; c <= N; c++) {
			if (kugi[r][c] >= 1) {
				ans++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}

