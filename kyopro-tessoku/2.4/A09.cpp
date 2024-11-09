#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int N = 0;
	int H = 0, W = 0;


	cin >> H >> W;
	cin >> N;


	vector<vector<int>> masu(H + 2, vector<int>(W + 2, 0));
	vector<vector<int>> r_sum(H + 2, vector<int>(W + 2, 0));
	vector<vector<int>> sum(H + 2, vector<int>(W + 2, 0));
	vector<int> A(N, 0);
	vector<int> B(N, 0);
	vector<int> C(N, 0);
	vector<int> D(N, 0);




	for (int i = 0; i < N; i++) {

		cin >> A[i] >> B[i] >> C[i] >> D[i];

		masu[A[i]][B[i]] += 1;
		masu[C[i] + 1][D[i] + 1] += 1;
		masu[A[i]][D[i] + 1] -= 1;
		masu[C[i] + 1][B[i]] -= 1;
	}

	/*
	cout << "masu" << endl;
	for (int raw = 1; raw <= W; raw++) {
		for (int col = 1; col <= H; col++) {
			cout << masu[raw][col] << "\t";
		}
		cout << endl;
	}
	*/


	for (int raw = 1; raw <= H; raw++) {
		for (int col = 1; col <= W; col++) {
			r_sum[raw][col] = masu[raw][col] + r_sum[raw][col - 1];
		}
	}

	/*
	cout << "r_sum" << endl;
	for (int raw = 1; raw <= H; raw++) {
		for (int col = 1; col <= W; col++) {
			cout << r_sum[raw][col] << "\t";
		}
		cout << endl;
	}
	*/

	for (int col = 1; col <= W; col++) {
		for (int raw = 1; raw <= H; raw++) {
			sum[raw][col] = r_sum[raw][col] + sum[raw - 1][col];
		}
	}


	for (int raw = 1; raw <= H; raw++) {
		for (int col = 1; col <= W; col++) {
			cout << sum[raw][col] << " ";
		}
		cout << endl;
	}

	return 0;

}

