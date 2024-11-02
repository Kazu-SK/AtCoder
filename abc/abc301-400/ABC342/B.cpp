#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;


	cin >> N;
	vector<int> P(N + 1, 0);

	for (int i = 1; i <= N; i++) {
		cin >> P[i];
	}


	int Q = 0;

	cin >> Q;
	vector<int> A(Q + 1, 0);
	vector<int> B(Q + 1, 0);

	for (int i = 1; i <= Q; i++) {
		cin >> A[i] >> B[i];
	}

	for (int i = 1; i <= Q; i++) {
		for (int j = 1; j <= N; j++) {

			if (P[j] == A[i]) {
				cout << A[i] << endl;
				break;
			}

			if (P[j] == B[i]) {
				cout << B[i] << endl;
				break;
			}
		}
	}

	return 0;
}

