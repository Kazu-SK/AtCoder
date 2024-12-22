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
	LL answer = 0;


	cin >> N;

	vector<LL> A(N);
	vector<LL> Power(N);
	const LL mod = 1000000007;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	//2^N対策
	Power[0] = 1;
	for (int i = 1; i < N; i++)
		Power[i] = 2 * Power[i - 1] % mod;


	for (int i = 0; i < N; i++) {
		//answer += (A[i] * Power[i]) % mod; 答えがずれる。
		answer += A[i] * Power[i];
		answer %= mod;
	}


	cout << answer << endl;

	return 0;
}

