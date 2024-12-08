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

enum Color {
	RED = 1,
	BLUE,
	YELLOW
};

LL CalcC(LL n, LL r) {

	if (n < 2)
		return 0;

	LL P = 1;
	LL r_kai = 1;
	LL ans = 0;

	LL i_lim = max(n - (n - r), n - r) + 1;

	for (LL i = n; i >= i_lim; i--)
		P *= i;

	r = min(r, n - r);
	for (LL i = r; i >= 1; i--)
		r_kai *= i;

	ans = P / r_kai;

	return ans;
}

int main()
{
	int N = 0;


	cin >> N;

	vector<int> A(N);
	vector<LL> color_sum(4, 0);
	LL ans = 0;

	for (int i = 0; i < N; i++) {
		cin >> A[i];

		if (A[i] == RED)color_sum[RED]++;
		if (A[i] == BLUE)color_sum[BLUE]++;
		if (A[i] == YELLOW)color_sum[YELLOW]++;
	}

	for (int c = RED; c <= YELLOW; c++)
		ans += CalcC(color_sum[c], (LL)2);

	cout << ans << endl;

	return 0;
}

