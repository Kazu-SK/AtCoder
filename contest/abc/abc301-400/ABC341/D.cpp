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

LL GCD(LL a, LL b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

LL LCM(LL a, LL b) {

	LL g = 0;
	LL ans = 0;
	const LL LIMIT = 1e18;

	g = GCD(a, b);

	if (a / g > LIMIT / b) // (a / g) * b > LIMIT 
		ans = -1;
	else
		ans = (a / g) * b;

	return ans;
}

int main()
{
	LL N, M, K;


	cin >> N >> M >> K;


	LL lcm_NM = LCM(N, M);

	LL l = 0, r = 2e18;
	LL mid = 0;
	LL k;
	while (l < r) {

		mid = (l + r) / 2;

		k = (mid / N) + (mid / M) - 2 * (mid / lcm_NM);

		if (k >= K)r = mid;
		else l = mid + 1;
	}

	cout << l << endl;
	//cout << r << endl;

	return 0;
}

