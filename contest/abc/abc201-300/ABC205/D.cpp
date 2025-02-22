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
	int N = 0, Q = 0;


	cin >> N >> Q;

	vector<LL> A(N);
	vector<LL> low(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		low[i] = A[i] - (i + 1);
		//cout << "low[" << i << "]=" << low[i] << endl;
	}

	for (int q = 0; q < Q; q++) {

		LL K = 0;
		LL ans = 0;

		cin >> K;


		int idx = lower_bound(low.begin(), low.end(), K) - low.begin();

		//cout << "idx = " << idx << endl;

		if (idx == N) { //Kがlow[N - 1]より大きい値の場合
			ans = A[N - 1] + (K - low[N - 1]);
		}
		else {
			ans = (A[idx] - 1) + (K - low[idx]);
		}

		cout << ans << endl;
		//cout << endl;

	}

	return 0;
}

