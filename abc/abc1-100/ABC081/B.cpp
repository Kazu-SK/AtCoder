
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;


	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int ans = 0;
	int div_count = 0;

	while (1) {

		div_count = 0;

		for (int i = 0; i < N; i++) {

			if (A[i] % 2 == 0) {
				div_count++;
				A[i] /= 2;
			}
		}

		if (div_count == N) {
			ans++;
		}
		else {
			break;
		}
	}

	cout << ans << endl;

	return 0;
}

