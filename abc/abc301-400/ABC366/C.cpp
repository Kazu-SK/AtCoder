#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using LL = long long;

int main()
{
	int Q = 0;

	cin >> Q;

	map<int, int> Map;

	//vector<int> bag;
	int count = 0;

	for (int q = 0; q < Q; q++) {
		int query_code;
		int ball_num;

		cin >> query_code;

		if (query_code == 1) {

			cin >> ball_num;

			Map[ball_num]++;

			if (Map[ball_num] == 1) {
				count++;
			}
		}

		if (query_code == 2) {

			cin >> ball_num;

			Map[ball_num]--;

			if (Map[ball_num] == 0) {
				count--;
			}
		}

		if (query_code == 3) {
			cout << count << endl;
		}
	}

	return 0;
}

