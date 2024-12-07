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


LL SumArithmeticProgression(LL a, LL n, LL d) {

	LL ans = 0;

	ans = n * (2 * a + (n - 1) * d) / 2;

	return ans;
}

int main()
{
	LL N = 0;
	LL ans = 0;


	cin >> N;


	ans = SumArithmeticProgression(0, N, 1);

	cout << ans << endl;

	return 0;
}

