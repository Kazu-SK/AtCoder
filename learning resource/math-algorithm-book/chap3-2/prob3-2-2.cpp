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

LL GCD(LL a, LL b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

int main()
{
	int N = 0;


	cin >> N;


	vector<LL> A(N);

	for (int i = 0; i < N; i++)
		cin >> A[i];

	LL ans = A[0];


	for (int i = 1; i < N; i++) {
		ans = GCD(ans, A[i]);
	}

	cout << ans << endl;

	return 0;
}

