#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;


	vector<string> S(N);


	for (int i = 0; i < N; i++)
		cin >> S[i];


	int size_max = S[0].size();
	for (int i = 1; i < N; i++) {

		if (S[i].size() > size_max) {
			size_max = S[i].size();
		}

		int diff_size = size_max - S[i].size();
		diff_size = abs(diff_size);

		while (diff_size) {
			S[i] += '*';
			diff_size--;
		}
	}


	for (int i = 0; i < N; i++) {

		int diff_size = size_max - S[i].size();

		while (diff_size) {
			S[i] += '-';
			diff_size--;
		}
	}

	//for (int i = 0; i < N; i++)
	//	cout << S[i] << endl;

	vector<vector<char>> trans_S(size_max, vector<char>(N));

	for (int j = 0; j < size_max; j++) {
		for (int i = N - 1; i >= 0; i--) {
			trans_S[j][N - 1 - i] = S[i][j];
		}
	}

	for (int i = 0; i < size_max; i++) {
		for (int j = 0; j < N; j++) {
			if (trans_S[i][j] != '-')
				cout << trans_S[i][j];
		}
		cout << endl;
	}

	return 0;
}

