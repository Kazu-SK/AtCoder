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
	string N;
	int K = 0;
	LL ans = 0;
	LL llsN = 0;
	LL lldN = 0;

	cin >> N >> K;

	ans = stoll(N);

	for (int i = 0; i < K; i++) {

		sort(N.begin(), N.end());
		llsN = stoll(N);

		sort(N.rbegin(), N.rend());
		lldN = stoll(N);

		ans = lldN - llsN;

		N = to_string(ans);
	}

	cout << ans << endl;

	return 0;
}

