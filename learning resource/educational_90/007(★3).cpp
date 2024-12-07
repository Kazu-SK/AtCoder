#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;
	int Q = 0;


	cin >> N;
	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	cin >> Q;
	vector<int> B(Q);

	for (int i = 0; i < Q; i++)
		cin >> B[i];


	sort(A.begin(), A.end());

	for (int i = 0; i < Q; i++) {
		if (A[N - 1] <= B[i]) {
			cout << abs(A[N - 1] - B[i]) << endl;
			continue;
		}

		if (A[0] >= B[i]) {
			cout << abs(A[0] - B[i]) << endl;
			continue;
		}

		LL itr = upper_bound(A.begin(), A.end(), B[i]) - A.begin();

		if (abs(A[itr] - B[i]) < abs(A[itr - 1] - B[i])) {
			cout << abs(A[itr] - B[i]) << endl;
		}
		else {
			cout << abs(A[itr - 1] - B[i]) << endl;
		}
	}

	return 0;
}

