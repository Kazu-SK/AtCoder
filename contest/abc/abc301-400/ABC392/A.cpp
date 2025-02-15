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
	vector<int> A(3);
	vector<int> B(3);


	for (int i = 0; i < 3; i++)
		cin >> A[i];

	bool judge = false;

	for (int i = 0; i < 3; i++) {

		int tmp = 0;

		if (A[0] == A[1] * A[2])
			judge = true;

		tmp = A[0];
		A[0] = A[1];
		A[1] = A[2];
		A[2] = tmp;
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

