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

int ice_Map[91][91];
int num_Map[91][91];
bool visited[8101];

const int DIFF[4][2] = { {1, 0}, {-1 ,0}, {0, 1}, {0, -1} };
int H, W;
int ans;
vector<vector<int>> Graph(8101);

void dfs(int num, int b = 1) {

	visited[num] = true;

	for (int itr = 0; itr < Graph[num].size(); itr++) {

		if (visited[Graph[num][itr]] == false)
			dfs(Graph[num][itr], b + 1);

		ans = max(ans, b);
	}

	ans = max(ans, b);

	visited[num] = false;
}

int main()
{
	cin >> W >> H;

	int num = 1;
	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {
			cin >> ice_Map[h][w];
			num_Map[h][w] = num;
			num++;
		}
	}

	ans = 0;
	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {

			if (ice_Map[h][w] == 1) {
				for (int i = 0; i < 4; i++) {
					int search_h = h + DIFF[i][0];
					int search_w = w + DIFF[i][1];

					if (search_h < 1 || search_h > H)continue;
					if (search_w < 1 || search_w > W)continue;

					if (ice_Map[search_h][search_w] == 1)
						Graph[num_Map[h][w]].push_back(num_Map[search_h][search_w]);
				}
			}
		}
	}

	for (int n = 1; n < num; n++)
		dfs(n);

	cout << ans << endl;

	return 0;
}

