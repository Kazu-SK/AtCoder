
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
	int N = 0, K = 0;

	cin >> N >> K;


	vector<LL> a(N);
	vector<LL> init_a(N);
	LL ans = 1e18;


	for (int i = 0; i < N; i++){
		cin >> a[i];
		init_a[i] = a[i];
	}

	for (int num = 0; num < 1 << (N - 1); num++) {

		LL max_a = a[0];
		LL cost = 0;
		int can_see = 1;
		
		for (int bit = 0; bit < N - 1; bit++) {
			if (num & (1 << bit)) {

				if (a[bit + 1] <= max_a) {
					cost += (max_a - a[bit + 1]) + 1;
					a[bit + 1] = max_a + 1;
				}
			}

			if (a[bit + 1] > max_a) {
				can_see++;
			}

			max_a = max(max_a, a[bit + 1]);
		}

		if (can_see >= K) {
			ans = min(ans, cost);
		}

		for (int a_i = 0; a_i < N; a_i++) {
			a[a_i] = init_a[a_i];
		}
	}

	cout << ans << endl;

	return 0;
}

