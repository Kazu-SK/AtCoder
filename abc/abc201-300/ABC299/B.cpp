
#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
	int N = 0;
	int T = 0;


	cin >> N >> T;

	vector<int> C(N);
	vector<int> R(N);

	for (int i = 0; i < N; i++) {
		cin >> C[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> R[i];
	}

	bool same_T = false;
	for (int i = 0; i < N; i++) {
		if (C[i] == T) {
			same_T = true;
			break;
		}
	}

	int ans = 1;
	int max_R = 0;

	if (same_T == true) {

		max_R = 0;

		for (int i = 0; i < N; i++) {
			if (C[i] == T && R[i] > max_R) {
				max_R = R[i];
				ans = i + 1;
			}
		}
	}
	else {

		max_R = R[0];

		for (int i = 1; i < N; i++) {

			if (C[0] == C[i] && R[i] > max_R) {
				max_R = R[i];
				ans = i + 1;
			}
		}

	}


	cout << ans << endl;

	return 0;
}
