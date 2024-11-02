#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int N = 0, M = 0;


	cin >> N >> M;


	vector<int> A(N + 1, 0);


	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());
	A.push_back(2000000000);

	int right = 1;
	int res = 0;

	for (int left = 1; left <= N; left++) {

		while (A[right] < A[left] + M) {
			right += 1;
		}

		res = max(res, right - left);

	}

	cout << res << endl;

	return 0;
}