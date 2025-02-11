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

	vector<vector<char>> S(H + 1, vector<char>(W + 1));

	int min_black_w = 10000;
	int max_black_w = 0;
	int min_black_h = 10000;
	int max_black_h = 0;

	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {
			cin >> S[h][w];

			if (S[h][w] == '#') {
				min_black_w = min(min_black_w, w);
				max_black_w = max(max_black_w, w);
				min_black_h = min(min_black_h, h);
				max_black_h = max(max_black_h, h);
			}

		}
	}

	bool judge = true;

	for (int h = min_black_h ; h <= max_black_h; h++) {
		for (int w = min_black_w ; w <= max_black_w ; w++) {

			if (S[h][w] == '.')
				judge = false;
		}
	}

	/*
	cout << "min_black_h = " << min_black_h << '\t';
	cout << "min_black_w = " << min_black_w << endl;
	cout << "max_black_h = " << max_black_h << '\t';
	cout << "max_black_w = " << max_black_w << endl;
	*/

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

