#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<pair<int, int>> p(N);

	for (int i = 0; i < N; i++) {
		int x = 0;
		int y = 0;

		cin >> x >> y;

		p[i].first = x;
		p[i].second = y;
	}

	LL ans = 0;

	sort(p.begin(), p.end());

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {

			int x[2];
			int y[2];
			int diff_x = 0;
			int diff_y = 0;
			LL area;
			pair<int, int> search_p[4];

			x[0] = p[i].first;
			y[0] = p[i].second;

			x[1] = p[j].first;
			y[1] = p[j].second;

			diff_x = x[1] - x[0];
			diff_y = y[1] - y[0];


			//rotation_right
			search_p[0].first = x[1] + diff_y;
			search_p[0].second = y[1] - diff_x;

			search_p[1].first = x[0] + diff_y;
			search_p[1].second = y[0] - diff_x;

			//rotation_left
			search_p[2].first = x[1] - diff_y;
			search_p[2].second = y[1] + diff_x;

			search_p[3].first = x[0] - diff_y;
			search_p[3].second = y[0] + diff_x;

			bool judge[4] = { false };

			for (int k = 0; k < 4; k++) {
				if (binary_search(p.begin(), p.end(), search_p[k])) {
					judge[k] = true;
				}
			}

			if((judge[0] && judge[1]) || (judge[2] && judge[3])) {
				area = (LL)diff_x * diff_x + (LL)diff_y * diff_y;
				ans = max(ans, area);
			}
		}
	}

	cout << ans << endl;

	return 0;
}