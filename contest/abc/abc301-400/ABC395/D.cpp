#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
	int N = 0;
	int Q = 0;


	map<int, int> bird;
	map<int, vector<int>> house;
	map<int, vector<int>> temp;


	cin >> N >> Q;

	for (int i = 1; i <= N; i++) {
		bird[i] = i;
		house[i].push_back(i);
	}

	for (int q = 1; q <= Q; q++) {

		int op = 0;
		int a = 0;
		int b = 0;

		cin >> op;

		if (op == 1) { //鳩aが巣bに移動
			cin >> a >> b;

			for (int i = 0; i < house[bird[a]].size(); i++) {
				if (house[bird[a]][i] == a) {
					house[bird[a]].erase(house[bird[a]].begin() + i);
					break;
				}
			}
			/*
			for (int i = 1; i <= N; i++) {
				//cout << "house[" << i << "]" << '\t';
				for (int j = 0; j < house[i].size(); j++) {
					cout << house[i][j] << " ";
				}
				//cout << endl;
			}
			*/

			bird[a] = b;
			house[b].push_back(a);
		}
		else if (op == 2) {
			cin >> a >> b;

			for (int i = 0; i < house[a].size(); i++) {
				temp[b].push_back(house[a][i]); //house[a][i] 巣aにいる鳩の番号
				bird[house[a][i]] = b; //鳩の居場所更新
			}

			house[a].clear();

			for (int i = 0; i < house[b].size(); i++) {
				house[a].push_back(house[b][i]); //house[b][i] 巣bにいる鳩の番号
				bird[house[b][i]] = a; //鳩の居場所更新
			}

			house[b].clear();

			for (int i = 0; i < temp[b].size(); i++) {
				house[b].push_back(temp[b][i]);
			}

			temp[b].clear();

		}
		else if (op == 3) { //鳩aの巣の場所出力
			cin >> a;
			cout << bird[a] << endl;
		}
		else {
		}

		/*
		for (int i = 1; i <= N; i++) {
			cout << "house[" << i << "]" << '\t';
			for (int j = 0; j < house[i].size(); j++) {
				cout << house[i][j] << " ";
			}
			cout << endl;
		}
		*/
	}

	return 0;
}

