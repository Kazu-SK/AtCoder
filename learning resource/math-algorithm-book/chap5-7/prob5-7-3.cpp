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

	vector<LL> A(N);

	for (int i = 0; i < N; i++)
		cin >> A[i];

	sort(A.rbegin(), A.rend());

	LL add = 0;
	LL sub = 0;
	LL ans = 0;

	for (int i = 0; i < N; i++) {
		add += A[i] * (N - i - 1);
		sub += A[i] * i;
	}

	ans = add - sub;

	cout << ans << endl;

	return 0;
}

