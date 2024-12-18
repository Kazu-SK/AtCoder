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
	int H = 0, W = 0;


	cin >> H >> W;

	vector<vector<int>> A(H, vector<int>(W, 0));
	vector<vector<int>> ans(H, vector<int>(W, 0));
	vector<int> sum_H(W, 0);
	vector<int> sum_W(H, 0);

	for (int h = 0; h < H; h++) {
		for (int w = 0; w < W; w++) {
			cin >> A[h][w];
		}
	}

	for (int h = 0; h < H; h++) {
		for (int w = 0 ; w < W; w++) {
			sum_W[h] += A[h][w];
		}
	}

	for (int w = 0 ; w < W; w++) {
		for (int h = 0; h < H; h++) {
			sum_H[w] += A[h][w];
		}
	}

	for (int h = 0; h < H; h++) {
		for (int w = 0 ; w < W; w++) {
			ans[h][w] = sum_W[h] + sum_H[w] - A[h][w];
			cout << ans[h][w] << " ";
		}
		cout << endl;
	}

	return 0;
}

