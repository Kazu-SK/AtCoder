
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;
	int M = 0;


	cin >> N >> M;


	vector<int> A(N, 0);
	vector<int> B(M, 0);


	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}

	int sum = 0;
	for (int i = 0; i < M; i++) {

		sum += A[B[i] - 1];
	}


	cout << sum << endl;

	return 0;
}