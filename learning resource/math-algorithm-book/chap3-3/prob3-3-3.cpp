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


LL CalcC(LL n, LL r) {
	LL P = 1;
	LL r_kai = 1;
	LL ans = 0;

	LL i_lim = max(n - (n - r), n - r) + 1;

	for (LL i = n; i >= i_lim; i--) {
		P *= i;
	}

	r = min(r, n - r);
	for (LL i = r; i >= 1; i--) {
		r_kai *= i;
	}

	ans = P / r_kai;

	return ans;
}

int main()
{
	LL n = 0;
	LL r = 0;


	cin >> n >> r;


	cout << CalcC(n, r) << endl;


	return 0;
}

