
/***

H*Wのエリアにちりばめられたチーズ1～Nを順にたどった場合、スタート地点からNのエリアまでの最短時間を求める。
エリア間の移動時間はTで共通とする。

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


int H, W, N;
const int RANGE_HW = 1000; // 入力される可能性のあるH,Wの最大値

vector<vector<char>> city_Map(RANGE_HW + 1, vector<char>(RANGE_HW + 1)); // . :道  # :壁
vector<vector<int>> city_P(RANGE_HW + 1, vector<int>(RANGE_HW + 1)); //エリア[h][w]を数値で表す
vector<vector<int>> P(RANGE_HW* RANGE_HW + 1);
vector<int> Time(RANGE_HW * RANGE_HW + 1, -1);

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
const int T = 1; //エリア間の距離


void clear(int ex) {
	for (int i = 1; i <= H * W; i++) {
		if (i != ex)
			Time[i] = -1;
	}
}

void check() {
	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {
			cout << Time[city_P[h][w]] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	cin >> H >> W >> N;

	map<int, int> cheese_P;

	int num = 0;
	int start_P = 0; //スタート位置
	int ans = 0;

	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {

			cin >> city_Map[h][w];

			num++;
			city_P[h][w] = num;

			if(city_Map[h][w] == 'S')
				start_P = city_P[h][w];

		}
	}

	int move_h = 0;
	int move_w = 0;
	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {

			if (city_Map[h][w] == 'X')
				continue;

			int cheese_hardness = city_Map[h][w] - '0';
			bool cheese_judge = cheese_hardness >= 1 && cheese_hardness <= 9;

			if (cheese_judge)
				cheese_P[cheese_hardness] = city_P[h][w];

			for (int i = 0; i < MOVE_NUM; i++) {

				move_h = h + DIFF[i][0];
				move_w = w + DIFF[i][1];

				if (move_h < 1 || move_h > H)continue;
				if (move_w < 1 || move_w > W)continue;

				cheese_hardness = city_Map[move_h][move_w] - '0';
				cheese_judge = cheese_hardness >= 1 && cheese_hardness <= 9;

				if (city_Map[move_h][move_w] == '.' || city_Map[move_h][move_w] || cheese_judge) {
					P[city_P[h][w]].push_back(city_P[move_h][move_w]);
				}
			}
		}
	}

	queue<int> Q;

	Q.push(start_P);
	Time[start_P] = 0; //スタート時の時間は0とする。

	int search_cheese = 1;
	int search_P = cheese_P[search_cheese];

	while (!Q.empty() && search_cheese <= N) {
		int pos = Q.front();

		Q.pop();

		for (int i = 0; i < P[pos].size(); i++) {
			int next_P = P[pos][i];


			if (next_P == search_P) {// 食べられるチーズが見つかった場合
				while (!Q.empty())
					Q.pop();

				Time[next_P] = Time[pos] + T; //next_Pまでの時間は、スタート位置からposまでの距離にTを足した値
				ans = Time[next_P];
				clear(next_P); //チーズが見つかった場所から再スタートするため、過去にたどった形跡を消す。

				Q.push(next_P);

				search_cheese++;
				search_P = cheese_P[search_cheese];
				break; //チーズが見つかった場所から再スタートするため、残りのP[pos][i]は無視する。
			}
			else {
				if (Time[next_P] == -1) {
					Time[next_P] = Time[pos] + T; //next_Pまでの時間は、スタート位置からposまでの距離にTを足した値
					Q.push(next_P);
				}
			}

			//check();
		}
	}

	cout << ans << endl;

	return 0;
}

