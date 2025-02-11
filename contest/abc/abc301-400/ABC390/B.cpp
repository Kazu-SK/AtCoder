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
	int N = 0;


	cin >> N;

	vector<LL> A(N + 1);

	for (int i = 1; i <= N; i++)
		cin >> A[i];


	bool judge = true;

	if (N >= 3) {
		for (int i = 2; i < N; i++) {
			if (A[i] * A[i] != A[i - 1] * A[i + 1])
				judge = false;
		}
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}

