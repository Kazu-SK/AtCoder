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

	vector<LL> A(N + 1);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	int j = 2; 
	LL ans = 0;

	for (int i = 1; i <= N; i++) {

		while (A[i] * 2 > A[j] && j < N)j++;

		if(A[i] * 2 <= A[j])
			ans += N - j + 1;
	}

	cout << ans << endl;


	return 0;
}

