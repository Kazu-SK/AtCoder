
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
const int RANGE_RC = 1000; // 入力される可能性のあるR,Cの最大値

vector<vector<char>> maze_Map(RANGE_RC + 1, vector<char>(RANGE_RC + 1)); // . :道  # :壁
vector<vector<int>> dist_Map(RANGE_RC + 1, vector<int>(RANGE_RC + 1, -1)); //エリア[r][c]を数値で表す

const int MOVE_NUM = 4; //移動できる方向の数
const int DIFF[MOVE_NUM][2] = { {1, 0}, {-1 ,0}, {0, 1}, {0, -1} }; //現在のエリアから移動可能のエリアの方向
const int D = 1; //エリア間の距離

void test() {

	for (int r = 1; r <= R; r++) {
		for (int c = 1; c <= C; c++) {
			cout << dist_Map[r][c] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void clear() {

	for (int r = 1; r <= R; r++) {
		for (int c = 1; c <= C; c++) {
			dist_Map[r][c] = -1;
		}
	}
}

int main()
{
	cin >> R >> C;

	vector<int> dist(RANGE_RC * RANGE_RC + 1, -1);

	int sr = 0, sc = 0; //スタート位置　座標
	int gr = 0, gc = 0; //ゴール位置　座標
	int ans = 1e9;

	for (int r = 1; r <= R; r++) {
		for (int c = 1; c <= C; c++) {

			cin >> maze_Map[r][c];

			if (maze_Map[r][c] == 'S') {
				sr = r;
				sc = c;
			}

			if (maze_Map[r][c] == 'G') {
				gr = r;
				gc = c;
			}
		}
	}

	queue<int> qR;
	queue<int> qC;
	queue<int> qD;

	for (int d = 0; d < MOVE_NUM; d++) {

		clear();
		while (!qR.empty())
			qR.pop();
		while (!qC.empty())
			qC.pop();
		while (!qD.empty())
			qD.pop();

		dist_Map[sr][sc] = 0; //スタート位置の距離は0とする。

		int move_r = sr + DIFF[d][0];
		int move_c = sc + DIFF[d][1];

		if (move_c < 1 || move_c > C)continue;
		if (move_r < 1 || move_r > R)continue;

		if (maze_Map[move_r][move_c] == '.' || maze_Map[move_r][move_c] == 'G') {
			qR.push(move_r);
			qC.push(move_c);
			qD.push(d);
			dist_Map[move_r][move_c] = dist_Map[sr][sc] + D;

			while (!qR.empty()) {
				int pos_r = qR.front();
				int pos_c = qC.front();
				int before_d = qD.front();

				qR.pop();
				qC.pop();
				qD.pop();

				for (int d = 0; d < MOVE_NUM; d++) {

					int move_r = pos_r + DIFF[d][0];
					int move_c = pos_c + DIFF[d][1];

					if (move_c < 1 || move_c > C)continue;
					if (move_r < 1 || move_r > R)continue;


					if (dist_Map[move_r][move_c] != -1)
						continue;

					if ((maze_Map[move_r][move_c] == '.' || maze_Map[move_r][move_c] == 'G') && ((before_d == 0 || before_d == 1) && (d == 2 || d == 3))) {
						qR.push(move_r);
						qC.push(move_c);
						qD.push(d);
						dist_Map[move_r][move_c] = dist_Map[pos_r][pos_c] + D;
					}

					if ((maze_Map[move_r][move_c] == '.' || maze_Map[move_r][move_c] == 'G') && ((before_d == 2 || before_d == 3) && (d == 0 || d == 1))) {
						qR.push(move_r);
						qC.push(move_c);
						qD.push(d);
						dist_Map[move_r][move_c] = dist_Map[pos_r][pos_c] + D;
					}
				}

				//test();
			}

			if (dist_Map[gr][gc] != -1) {
				ans = min(ans, dist_Map[gr][gc]);
			}
		}
	}

	if (ans == 1e9)
		cout << -1 << endl;
	else
		cout << ans << endl;

	return 0;
}

