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


	vector<int> A(N);
	vector<int> sum(5, 0); //100 : 1 ... 400 : 4 
	LL ans = 1;

	for (int i = 0; i < N; i++) {
		cin >> A[i];

		if (A[i] == 100)sum[1]++;
		if (A[i] == 200)sum[2]++;
		if (A[i] == 300)sum[3]++;
		if (A[i] == 400)sum[4]++;

	}

	ans = (LL)sum[1] * sum[4] + (LL)sum[2] * sum[3];

	cout << ans << endl;

	return 0;
}

