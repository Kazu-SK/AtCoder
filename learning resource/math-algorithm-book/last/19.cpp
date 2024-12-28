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

	vector<int> B(N - 1);
	int sum = 0;
	int ans = 0;


	for (int i = 0; i < N - 1; i++)
		cin >> B[i];

	ans += B[0];

	for (int i = 0; i < N - 2; i++) {
		if (B[i] > B[i + 1])
			B[i] = B[i + 1];
	}

	for (int i = 0; i < N - 1; i++)
		sum += B[i];

	ans += sum;

	cout << ans << endl;

	return 0;
}

