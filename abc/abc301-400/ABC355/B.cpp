#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0, M = 0;


	cin >> N >> M;


	vector<int> A(N, 0);
	vector<int> B(M, 0);
	vector<int> C;
	vector<char> AB_flag;


	for (int i = 0; i < N; i++) {
		cin >> A[i];
		C.push_back(A[i]);
		AB_flag.push_back('A');
	}

	for (int i = 0; i < M; i++) {
		cin >> B[i];
		C.push_back(B[i]);
		AB_flag.push_back('B');
	}


	int C_tmp = 0;
	char AB_flag_tmp = 0;
	bool ans = false;
	for (int i = 0; i < N + M; i++) {
		for (int j = i + 1; j < N + M; j++) {

			if (C[i] > C[j]) {
				C_tmp = C[i];
				C[i] = C[j];
				C[j] = C_tmp;

				AB_flag_tmp = AB_flag[i];
				AB_flag[i] = AB_flag[j];
				AB_flag[j] = AB_flag_tmp;
			}

		}

		if (i >= 1) {
			if (AB_flag[i] == 'A' && AB_flag[i - 1] == 'A') {
				ans = true;
				break;
			}
		}
	}

	if (ans == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}

