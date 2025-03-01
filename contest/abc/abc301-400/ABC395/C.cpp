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

	vector<int> A(N + 1);
	map<int, int> start;
	//map<int, int> end;
	int ans = 1e9;

	for (int i = 1; i <= N; i++)
		cin >> A[i];

	for (int i = 1; i <= N; i++) {
		if (start[A[i]] == 0) {
			start[A[i]] = i;
		}
		else {
			ans = min(ans, i - start[A[i]] + 1);
			start[A[i]] = i;
		}

	}

	if (ans == 1e9) {
		ans = -1;
	}

	cout << ans << endl;

	return 0;
}

