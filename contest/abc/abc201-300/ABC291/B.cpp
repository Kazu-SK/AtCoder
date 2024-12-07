#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;


	vector<int> point(5 * N);
	vector<int> sum(5 * N);
	int last_sum = 0;
	double ans = 0;


	for (int i = 0; i < 5 * N; i++) {
		cin >> point[i];
	}

	sort(point.begin(), point.end());

	for (int i = 0; i < 5 * N; i++) {
		if (i == 0) {
			sum[i] = point[i];
		}
		else {
			sum[i] = sum[i - 1] + point[i];
		}
	}

	last_sum = sum[5 * N - 1];


	last_sum -= sum[N - 1];
	last_sum -= sum[5 * N - 1] - sum[5 * N - 1 - N];


	ans = (double)last_sum / (3 * N);

	cout << ans << endl;

	return 0;
}

