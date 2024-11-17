
#include <iostream>
#include <vector>
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


	cin >> N;

	vector<LL> A(N + 1);
	vector<LL> sum(N + 1, 0);
	vector<LL> ans(N + 1, 0);


	for (int i = 1; i <= N; i++) {
		cin >> A[i];

		sum[i] = A[i] + sum[i - 1];
	}

	for (int k = 1; k <= N; k++) {
		for (int i = 0; i + k <= N; i++) {
			ans[k] = max(ans[k], sum[i + k] - sum[i]);
		}
	}

	for (int k = 1; k <= N; k++) {
		cout << ans[k] << endl;
	}

	return 0;
}

