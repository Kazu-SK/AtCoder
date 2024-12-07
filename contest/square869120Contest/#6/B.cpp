
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

	vector<LL> A(N);
	vector<LL> B(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}

	LL ans = 1e18;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {

			LL entrance = 0;
			LL exit = 0;

			for (int t = 0; t < 4; t++) {

				LL calc_time[2] = { 0 };
				LL calc_sum_time = 0;

				switch (t) {
					case 0:
						entrance = A[i];
						exit = A[j];
						break;
					case 1:
						entrance = B[i];
						exit = B[j];
						break;
					case 2:
						entrance = A[i];
						exit = B[j];
						break;
					case 3:
						entrance = B[i];
						exit = A[j];
						break;
					default:
						break;
				}

				for (int k = 0; k < N; k++) {
					calc_time[0] = abs(entrance - A[k]) + abs(A[k] - B[k]) + abs(exit - B[k]);
					calc_time[1] = abs(entrance - B[k]) + abs(A[k] - B[k]) + abs(exit - A[k]);

					calc_sum_time += min(calc_time[0], calc_time[1]);
				}

				ans = min(ans, calc_sum_time);
			}
		}
	}

	cout << ans << endl;

	return 0;
}

