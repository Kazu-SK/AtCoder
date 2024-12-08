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
	int H = 0, W = 0, D = 0;


	cin >> H >> W >> D;


	vector<vector<char>> S(H + 1, vector<char>(W + 1, '.'));

	vector<int> yuka_h;
	vector<int> yuka_w;

	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {
			cin >> S[h][w];

			if (S[h][w] == '.') {
				yuka_h.push_back(h);
				yuka_w.push_back(w);
			}
		}
	}

	int yuka_size = yuka_h.size();
	int tmp = 0;
	int ans = 0;

	for (int i = 0; i < yuka_size - 1; i++) {
		for (int j = i + 1; j < yuka_size; j++) {
			
			for (int h = 1; h <= H; h++) {
				for (int w = 1; w <= W; w++) {

					int distance[2];

					distance[0] = abs(h - yuka_h[i]) + abs(w - yuka_w[i]);
					distance[1] = abs(h - yuka_h[j]) + abs(w - yuka_w[j]);

					if (distance[0] <= D || distance[1] <= D) {
						if (S[h][w] == '.') {
							tmp++;
						}
					}
				}
			}

			ans = max(ans, tmp);
			tmp = 0;
		}
	}

	cout << ans << endl;

	return 0;
}

