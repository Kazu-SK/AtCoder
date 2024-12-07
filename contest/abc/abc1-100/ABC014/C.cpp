
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
	int n = 0;
	const int COLOR_LIMIT = 1000000;


	cin >> n;


	vector<LL> a(n + 1, 0);
	vector<LL> b(n + 1, 0);
	vector<LL> color(COLOR_LIMIT + 2, 0);
	vector<LL> color_sum(COLOR_LIMIT + 2, 0);
	LL ans = 0;


	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];

		color[a[i]] += 1;
		color[b[i] + 1] -= 1;
	}

	for (int c = 0; c <= COLOR_LIMIT; c++) {

		if (c == 0) {
			color_sum[c] = color[c];
		}
		else {
			color_sum[c] = color_sum[c - 1] + color[c];
		}
	}

	for (int c = 0; c <= COLOR_LIMIT; c++) {
		ans = max(ans, color_sum[c]);
	}

	cout << ans << endl;

	return 0;
}

