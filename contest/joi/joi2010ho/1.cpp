
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
	int m = 0;

	cin >> n >> m;

	vector<LL> s(n + 1, 0);
	vector<LL> s_sum(n + 1, 0);
	vector<int> a(m + 1, 0);
	LL ans = 0;
	const LL DIV = 1e5;

	for (int i = 2; i <= n; i++) {
		cin >> s[i];
		s_sum[i] = s[i] + s_sum[i - 1];
	}

	for (int i = 1; i <= m; i++) {
		cin >> a[i];
	}

	int pos = 1;
	for (int i = 1; i <= m; i++) {

		int max_pos = 0;
		int min_pos = 0;

		max_pos = max(pos, pos + a[i]);
		min_pos = min(pos, pos + a[i]);
		
		ans += s_sum[max_pos] - s_sum[min_pos];
		pos += a[i];

		ans %= DIV;
	}

	cout << ans << endl;

	return 0;
}

