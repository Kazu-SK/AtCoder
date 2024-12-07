#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<LL> A(N);
	vector<LL> B(N);
	vector<LL> ans(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}

	for (int i = 0; i < N; i++) {
		ans[i] = A[i] + B[i];

		cout << ans[i] << endl;
	}

	return 0;
}

