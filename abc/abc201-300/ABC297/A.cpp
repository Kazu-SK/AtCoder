
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;
	int D = 0;


	cin >> N >> D;


	vector<int> T(N);

	for (int i = 0; i < N; i++) {
		cin >> T[i];
	}

	for (int i = 1; i < N; i++) {
		if (abs(T[i] - T[i - 1]) <= D) {
			cout << T[i] << endl;
			return 0;
		}
	}

	cout << -1 << endl;

	return 0;
}

