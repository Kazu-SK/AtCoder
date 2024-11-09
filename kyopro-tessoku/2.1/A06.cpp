#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N = 0;
	int Q = 0;


	cin >> N >> Q;


	int offset = 1;
	vector<int> A(N + offset, 0);
	vector<int> S(N + offset, 0);
	vector<int> L(Q + offset, 0);
	vector<int> R(Q + offset, 0);

	for (int i = 1; i <= N; i++) cin >> A[i];
	for (int j = 1; j <= Q; j++) cin >> L[j] >> R[j];

	for (int i = 1; i <= N; i++) S[i] = S[i - 1] + A[i];

	for (int j = 1; j <= Q; j++) {
		cout << S[R[j]] - S[L[j] - 1] << endl;
	}

	return 0;
}