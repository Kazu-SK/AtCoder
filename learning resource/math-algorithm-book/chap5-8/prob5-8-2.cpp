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

int main()
{
	LL N = 0;
	LL ans = 0;


	cin >> N;


	if (N % 2 == 0) {
		ans = N * (N / 2 - 1) + (N / 2);
	}
	else {
		ans = N * ((N - 1) / 2);
	}

	cout << ans << endl;

	return 0;
}

