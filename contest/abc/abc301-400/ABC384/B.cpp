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
	int N = 0, R = 0;
	int ans = 0;


	cin >> N >> R;


	vector<int> A(N);
	vector<int> D(N);

	for (int i = 0; i < N; i++) {
		cin >> D[i] >> A[i];
	}

	ans += R;

	for (int i = 0; i < N; i++) {
		if (D[i] == 1) {
			if (ans >= 1600 && ans <= 2799) {
				ans += A[i];
			}
		}
		else {
			if (ans >= 1200 && ans <= 2399) {
				ans += A[i];
			}
		}
	}

	cout << ans << endl;

	return 0;
}

