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
	vector<int> A(6);


	for (int i = 1; i <= 5; i++)
		cin >> A[i];

	bool judge = false;

	for (int i = 1; i <= 4; i++) {
		if (A[i] > A[i + 1]) {
			swap(A[i], A[i + 1]);
			judge = true;
			break;
		}
	}


	for (int i = 1; i <= 5; i++) {
		if (A[i] != i)
			judge = false;
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}

