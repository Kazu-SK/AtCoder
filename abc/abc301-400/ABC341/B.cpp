#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;


	cin >> N;

	vector<long long> A(N + 1);
	vector<long long> S(N + 1);
	vector<long long> T(N + 1);


	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	for (int i = 1; i < N; i++) {
		cin >> S[i] >> T[i];
	}

	for (int i = 1; i <= N - 1; i++) {
		A[i + 1] += A[i] / S[i] * T[i];
	}

	cout << A[N] << endl;

}
