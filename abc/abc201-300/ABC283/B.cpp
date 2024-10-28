#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<int> A(N);


	for (int i = 0; i < N; i++)
		cin >> A[i];


	int Q = 0;

	cin >> Q;

	const int CHANGE = 1;
	const int OUTPUT = 0;

	for (int i = 0; i < Q; i++) {
		int query = 0;
		int k = 0;
		int x = 0;

		cin >> query;

		if (query == CHANGE) {

			cin >> k >> x;

			A[k - 1] = x;
		}
		else {

			cin >> k;
			cout << A[k - 1] << endl;
		}

	}

	return 0;
}

