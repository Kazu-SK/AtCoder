#include<iostream>
#include<vector>


using namespace std;


int main(void) {

	int H = 0;
	int W = 0;
	int Q = 0;


	cin >> H >> W;

	const int index_pr = 1;
	vector<vector<int>> data(H + index_pr, vector<int>(W + index_pr, 0));


	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			cin >> data.at(i).at(j);
		}
	}

	cin >> Q;

	vector<int> A(Q, 0);
	vector<int> B(Q, 0);
	vector<int> C(Q, 0);
	vector<int> D(Q, 0);
	vector<int> ans(Q, 0);

	for (int i = 0; i < Q; i++) {
		cin >> A[i] >> B[i] >> C[i] >> D[i];
	}

	vector<vector<int>> sum_H(H + index_pr, vector<int>(W + index_pr, 0));
	vector<vector<int>> sum_data(H + index_pr, vector<int>(W + index_pr, 0));

	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			sum_H.at(i).at(j) += sum_H.at(i).at(j - 1) + data.at(i).at(j);
		}
	}

	for (int i = 1; i <= W; i++) {
		for (int j = 1; j <= H; j++) {
			sum_data.at(j).at(i) += sum_data.at(j - 1).at(i) + sum_H.at(j).at(i);
		}
	}

	for (int i = 0; i < Q; i++)
		cout << sum_data.at(C[i]).at(D[i]) + sum_data.at(A[i] - 1).at(B[i] - 1) - sum_data.at(C[i]).at(B[i] - 1) - sum_data.at(A[i] - 1).at(D[i]) << endl;

	return 0;
}