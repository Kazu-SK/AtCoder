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
	LL H = 0, W = 0, K = 0, V = 0;


	cin >> H >> W >> K >> V;

	vector<vector<LL>> A_sum(H + 1, vector<LL>(W + 1, 0));

	for (int r = 1; r <= H; r++) {
		for (int c = 1; c <= W; c++) {
			cin >> A_sum[r][c];
		}
	}

	//二次元累積和の算出
	for (int r = 1; r <= H; r++) {
		for (int c = 1; c <= W; c++) {
			A_sum[r][c] += A_sum[r][c - 1];
		}
	}

	for (int c = 1; c <= W; c++) {
		for (int r = 1; r <= H; r++) {
			A_sum[r][c] += A_sum[r - 1][c];
		}
	}

	LL ans = 0;
	LL land = 0;
	LL house = 0;
	LL area = 0;

	for (int s_r = 1; s_r <= H; s_r++) {
		for (int s_c = 1; s_c <= W; s_c++) {
			for (int r = s_r; r <= H; r++) {
				for (int c = s_c; c <= W; c++) {

					area = (r - s_r + 1) * (c - s_c + 1);
					land = A_sum[r][c] + A_sum[s_r - 1][s_c - 1] - A_sum[r][s_c - 1] - A_sum[s_r - 1][c];
					house = K * area;

					if (land + house <= V) {
						ans = max(ans, area);
					}
				}
			}
		}
	}

	cout << ans << endl;

	return 0;
}

