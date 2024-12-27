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

LL SumArithmeticProgression1d(LL n) {
	return n * (n + 1) / 2;
}

int main()
{
	LL A = 0, B = 0, C = 0;
	vector<LL> input_ABC(3);
	vector<LL> sum_ABC(3);
	LL ans = 1;

	const LL DIV = 998244353;


	for (int i = 0; i < 3; i++) {
		cin >> input_ABC[i];
	}

	for (int i = 0; i < 3; i++) {

		sum_ABC[i] = SumArithmeticProgression1d(input_ABC[i]);
		sum_ABC[i] %= DIV;

		ans *= sum_ABC[i];
		ans %= DIV;
	}

	cout << ans << endl;

	return 0;
}

