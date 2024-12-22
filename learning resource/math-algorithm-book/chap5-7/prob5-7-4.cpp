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

	vector<LL> X(N);
	vector<LL> Y(N);

	for (int i = 0; i < N; i++) {
		cin >> X[i] >> Y[i];
	}

	sort(X.rbegin(), X.rend());
	sort(Y.rbegin(), Y.rend());

	LL x_add = 0;
	LL x_sub = 0;
	LL x_ans = 0;
	LL y_add = 0;
	LL y_sub = 0;
	LL y_ans = 0;

	for (int i = 0; i < N; i++) {
		x_add += X[i] * (N - i - 1);
		x_sub += X[i] * i;

		y_add += Y[i] * (N - i - 1);
		y_sub += Y[i] * i;
	}

	x_ans = x_add - x_sub;
	y_ans = y_add - y_sub;

	cout << x_ans + y_ans << endl;

	return 0;
}

