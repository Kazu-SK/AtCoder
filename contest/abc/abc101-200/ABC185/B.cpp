#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	int N = 0, M = 0, T = 0;
	int init_N;


	cin >> N >> M >> T;

	init_N = N;

	vector<int> A(M + 1, 0);
	vector<int> B(M + 1, 0);

	for (int i = 1; i <= M; i++) {
		cin >> A[i];
		cin >> B[i];
	}

	A.push_back(T);
	B.push_back(T);

	int down_N;
	bool ans = true;

	for (int i = 1; i <= M + 1; i++) {

		N -= A[i] - B[i - 1];

		if (N <= 0) {
			ans = false;
			break;
		}

		for (int cafe_time = A[i] + 1; cafe_time <= B[i]; cafe_time++) {
			if (N + 1 <= init_N)
				N++;
		}
	}

	if (ans) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}


	return 0;
}

