
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;


void rotation(int n, vector<vector<int>>& C) {

	vector<vector<int>> before_C(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			before_C[i][j] = C[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = before_C[n-1-j][i];
		}
	}

}

int main()
{
	int N = 0;


	cin >> N;

	vector<vector<int>> A(N, vector<int>(N, 0));
	vector<vector<int>> B(N, vector<int>(N, 0));


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> B[i][j];
		}
	}

	//cout << endl;
	for (int r = 1; r <= 4; r++) {
		rotation(N, A);

		bool judge = true;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (A[i][j] == 1 && B[i][j] != 1) {
					judge = false;
				}
			}
		}

		if (judge == true) {
			cout << "Yes" << endl;
			return 0;
		}
		

		/*
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		*/
	}

	cout << "No" << endl;

	return 0;
}

