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
	int N = 0;
	int SEARCH = 1e5;

	cin >> N;

	vector<int> A(N);
	vector<LL> sum(SEARCH, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		sum[A[i]]++;
	}

	LL ans = 0;

	for (int i = 1; i <= 49999; i++) {
		ans += sum[i] * sum[SEARCH - i];
	}
	ans += sum[50000] * (sum[50000] - 1) / 2;

	cout << ans << endl;

	return 0;
}

