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
	vector<LL> B(N);
	LL ans = 0;


	for (int i = 0; i < N; i++)
		cin >> A[i];

	for (int i = 0; i < N; i++)
		cin >> B[i];


	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	for (int i = 0; i < N; i++) {
		ans += abs(A[i] - B[i]);
	}


	cout << ans << endl;

	return 0;
}

