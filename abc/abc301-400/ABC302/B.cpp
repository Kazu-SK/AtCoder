
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int H = 0, W = 0;


	cin >> H >> W;

	vector<vector<char>> S(H, vector<char>(W));


	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> S[i][j];
		}
	}


	int diff_h[8] = {1, 1, 0, -1, -1, -1,  0,  1};
	int diff_w[8] = {0, 1, 1,  1,  0, -1, -1, -1};


	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {

			string judge_s[8];
			int judge_h[8] = { i };
			int judge_w[8] = { j };

			for (int d = 0; d < 8; d++) {
				judge_s[d] += S[i][j];
				judge_h[d] = i;
				judge_w[d] = j;
			}

			for (int d = 0; d < 8; d++) {

				for (int a = 1; a <= 4; a++) {
					if (judge_h[d] + diff_h[d] < 0 || judge_h[d] + diff_h[d] >= H)break;
					if (judge_w[d] + diff_w[d] < 0 || judge_w[d] + diff_w[d] >= W)break;

					judge_h[d] += diff_h[d];
					judge_w[d] += diff_w[d];

					judge_s[d] += S[judge_h[d]][judge_w[d]];
				}

				if (judge_s[d] == "snuke") {

					int ans_h = i + 1;
					int ans_w = j + 1;
					cout << ans_h << " " << ans_w << endl;

					for (int a = 1; a <= 4 ; a++) {
						ans_h += diff_h[d];
						ans_w += diff_w[d];

						cout << ans_h << " " << ans_w << endl;

					}

					return 0;
				}
			}

		}
	}


	return 0;
}

