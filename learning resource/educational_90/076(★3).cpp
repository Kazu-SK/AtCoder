
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<LL> A(2 * N + 1, 0);
	vector<LL> B(2 * N + 1, 0);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
		A[i + N] = A[i];
	}

	for (int i = 1; i <= 2 * N; i++) {
		B[i] = A[i] + B[i - 1];
	}

	int right = 1;
	int left = 0;

	LL search_num = B[N] / 10;
	bool ans = false;

	if (search_num < 1) {
		cout << "No" << endl;
		return 0;
	}

	//しゃくとり法
	//leftはfor文で一つずつ増やす。rightは1回のfor文のループで可能な限り増やす。
	for (int left = 0; left < 2 * N; left++) {
		while (right <= 2 * N && B[right] - B[left] < search_num) {
			right++;
		}

		if (B[right] - B[left] == search_num) {
			ans = true;
			break;
		}
	}

	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

