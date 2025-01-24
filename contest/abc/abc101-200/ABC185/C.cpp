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

LL CalcC(LL n, LL k) {

	LL ans = 1;

	for (LL i = 1; i <= k; ++i) {
		ans = ans * (n - i + 1) / i;
	}

	return ans;
}

int main()
{
	LL L = 0;


	cin >> L;

	cout << CalcC(L - 1, 11) << endl;

	return 0;
}

