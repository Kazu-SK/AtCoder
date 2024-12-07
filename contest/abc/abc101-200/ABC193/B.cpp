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
	int CANT_BUY = 1e9 + 1;


	cin >> N;


	vector<int> A(N);
	vector<int> P(N);
	vector<int> X(N);


	for (int i = 0; i < N; i++) {
		cin >> A[i];
		cin >> P[i];
		cin >> X[i];
	}

	int ans = CANT_BUY;
	int time = 0;

	for (int i = 0; i < N; i++) {
		if (A[i] < X[i]) {
			ans = min(ans, P[i]);
		}
	}

	if (ans == CANT_BUY) {
		cout << -1 << endl;
	}
	else {
		cout << ans << endl;
	}

	return 0;
}

