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
	int X = 0, Y = 0;
	string T;

	cin >> H >> W >> X >> Y;

	vector<vector<char>> S(H + 1, vector<char>(W + 1, 0));

	for (int h = 1; h <= H; h++) {
		for (int w = 1; w <= W; w++) {
			cin >> S[h][w];
		}
	}

	cin >> T;

	int house_count = 0;
	int direct[4][2] = { {-1, 0}, {1, 0}, {0, -1},{0, 1} };//UDLR
	int d_itr = 0;
	int next_x = 0;
	int next_y = 0;

	pair<int, int> p;
	map<pair<int, int>, bool> Map;

	for (int t = 0; t < T.size(); t++) {

		switch (T[t]) {
		case 'U':
			d_itr = 0;
			break;
		case 'D':
			d_itr = 1;
			break;
		case 'L':
			d_itr = 2;
			break;
		case 'R':
			d_itr = 3;
			break;
		default:
			break;
		}

		next_x = X + direct[d_itr][0];
		next_y = Y + direct[d_itr][1];

		if (S[next_x][next_y] == '#')
			continue;

		p.first = next_x;
		p.second = next_y;

		if (S[next_x][next_y] == '@' && Map[p] == false) {
			house_count++;
			Map[p] = true;
		}

		X = next_x;
		Y = next_y;
	}

	cout << X << " " << Y << " " << house_count << endl;

	return 0;
}

