#include <iostream>
#include <vector>


using namespace std;

int main()
{
	int N = 0;

	cin >> N;

	vector<long long> W(N + 1, 0);
	vector<long long> A(N + 1, 0);
	vector<long long> W_sum(N + 1, 0);
	vector<long long> W_max(N + 1, 0);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	for (int i = 1; i <= N; i++) {
		cin >> W[i];

		W_sum[A[i]] += W[i];
		W_max[A[i]] = max(W_max[A[i]], W[i]);
	}

	long long answer = 0;
	for (int i = 1; i <= N; i++) {
		answer += W_sum[i] - W_max[i];
	}

	cout << answer << endl;

	return 0;
}

