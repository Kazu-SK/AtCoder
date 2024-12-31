
/***

現在いる薄氷のエリアから移動可能のエリアをDIFFとした場合、
最大でいくつの薄氷があるエリアに移動できるかを求める。

***/

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

const int EREA_RANGE = 90; //h, wの最大値
int ice_Map[EREA_RANGE + 1][EREA_RANGE + 1]; //0:氷じゃない 1:氷
int num_Map[EREA_RANGE + 1][EREA_RANGE + 1]; //エリア[h][w]を数値で定義する。

/*
[1][1]	[1][2]	[1][3]	[1][4]
[2][1]	[2][2]	[2][3]	[2][4]
[3][1]	[3][2]	[3][3]	[3][4]

1	2	3	4
5	6	7	8
9	10	11	12
*/

bool visited[EREA_RANGE * EREA_RANGE + 1]; //訪問済みのエリア
const int MOVE_NUM = 4;
const int DIFF[MOVE_NUM][2] = { {1, 0}, {-1 ,0}, {0, 1}, {0, -1} }; //現在のエリアから移動可能のエリアの方向

int H, W;
int ans;
vector<vector<int>> Graph(EREA_RANGE * EREA_RANGE + 1); //接続されている各頂点

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
				for (int i = 0; i < MOVE_NUM; i++) {
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

