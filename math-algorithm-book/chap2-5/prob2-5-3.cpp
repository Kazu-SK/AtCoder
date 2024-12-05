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
	LL ans = 1;


	cin >> N;


	for (LL i = 1; i <= N; i++) {
		ans *= i;
	}

	cout << ans << endl;

	return 0;
}

