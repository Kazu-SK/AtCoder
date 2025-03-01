#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	bool judge = true;

	for (int i = 1; i < N; i++) {
		if (A[i - 1] >= A[i]) {
			judge = false;
		}
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	 

	return 0;
}

