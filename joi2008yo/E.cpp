
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
	int R = 0, C = 0;
	LL ans = 0;


	cin >> R >> C;

	vector<vector<int>> a(R, vector<int>(C));

	for (int r = 0; r < R; r++) {
		for (int c = 0; c < C; c++) {
			cin >> a[r][c];
		}
	}

	for (int num = 0; num < (1 << R); num++) {

		auto a2 = a;

		LL senbei_count = 0;
		const int FRONT = 1;

		for (int bit = 0; bit < R; bit++) {
			if (num & (1 << bit)) {
				for (int c = 0; c < C; c++) {
					a2[bit][c] = 1 - a2[bit][c];
				}
			}
		}
		
		for (int c = 0; c < C; c++) {

			LL front_count = 0;

			for (int r = 0; r < R; r++) {
				if (a2[r][c] == FRONT) {
					front_count++;
				}
			}

			senbei_count += max(front_count, R - front_count);
		}

		ans = max(ans, senbei_count);
	}

	cout << ans << endl;

	return 0;
}

