
/***

与えられた迷路について、スタートからゴールのエリアまでの最短距離dを求める。
マス間の距離はDで共通とする。

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


int R, C; //H, W 
const int RANGE_RC = 50; // 入力される可能性のあるR,Cの最大値

vector<vector<char>> maze_Map(RANGE_RC + 1, vector<char>(RANGE_RC + 1)); // . :道  # :壁
vector<vector<int>> maze_num(RANGE_RC + 1, vector<int>(RANGE_RC + 1)); //エリア[r][c]を数値で表す
vector<vector<int>> P(RANGE_RC * RANGE_RC + 1);

/*
[1][1]	[1][2]	[1][3]	[1][4]
[2][1]	[2][2]	[2][3]	[2][4]
[3][1]	[3][2]	[3][3]	[3][4]

1	2	3	4
5	6	7	8
9	10	11	12
*/

const int MOVE_NUM = 4; //移動できる方向の数
const int DIFF[MOVE_NUM][2] = { {1, 0}, {-1 ,0}, {0, 1}, {0, -1} }; //現在のエリアから移動可能のエリアの方向
const int D = 1; //エリア間の距離


int main()
{
	cin >> R >> C;

	vector<int> dist(RANGE_RC * RANGE_RC + 1, -1);

	int sy = 0, sx = 0; //スタート位置　座標
	int gy = 0, gx = 0; //ゴール位置　座標
	int num = 0;

	cin >> sy >> sx;
	cin >> gy >> gx;

	for (int r = 1; r <= R; r++) {
		for (int c = 1; c <= C; c++) {

			cin >> maze_Map[r][c];

			num++;
			maze_num[r][c] = num;
		}
	}

	int move_r = 0;
	int move_c = 0;
	for (int r = 1; r <= R; r++) {
		for (int c = 1; c <= C; c++) {

			if (maze_Map[r][c] == '#')
				continue;

			for (int i = 0; i < MOVE_NUM; i++) {

				move_r = r + DIFF[i][0];
				move_c = c + DIFF[i][1];

				if (move_c < 1 || move_c > C)continue;
				if (move_r < 1 || move_r > R)continue;

				if (maze_Map[move_r][move_c] == '.') {
					P[maze_num[r][c]].push_back(maze_num[move_r][move_c]);
				}
			}
		}
	}


	queue<int> Q;

	int start_P; //スタート位置

	start_P = maze_num[sy][sx];
	Q.push(start_P);
	dist[start_P] = 0; //スタート位置の距離は0とする。

	while (!Q.empty()) {
		int pos = Q.front();

		Q.pop();

		for (int i = 0; i < P[pos].size(); i++) {
			int next_P = P[pos][i];

			if (dist[next_P] == -1){// 距離が確定していない場合
				dist[next_P] = dist[pos] + D; //next_Pまでの距離は、スタート位置からposまでの距離にDを足した値
				Q.push(next_P);
			}
		}
	}

	cout << dist[maze_num[gy][gx]] << endl;

	return 0;
}

