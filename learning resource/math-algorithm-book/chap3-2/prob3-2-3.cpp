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

LL LCM(LL a, LL b) {

	LL g = 0;
	LL ans = 0;
	const LL LIMIT = 1e18;

	g = GCD(a, b);

	if (a / g > LIMIT / b) // (a / g) * b > LIMIT 
		ans = -1;
	else
		ans = (a / g) * b;

	return ans;
}

int main()
{
	int N = 0;
	const LL LIMIT = 1e18;


	cin >> N;
	vector<LL> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	LL l_c_mul = A[0];

	for (int i = 1; i < N; i++) {
		l_c_mul = LCM(l_c_mul, A[i]);
	}

	cout << l_c_mul << endl;

	return 0;
}

