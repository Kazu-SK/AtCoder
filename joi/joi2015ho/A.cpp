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
	int N = 0, M = 0;


	cin >> N >> M;

	vector<int> P(M + 1);
	vector<int> A(N);
	vector<int> B(N);
	vector<int> C(N);
	vector<int> R(N,0);
	vector<int> cheap(N,0);

	for (int i = 1; i <= M; i++)
		cin >> P[i];


	for (int i = 1; i < N; i++)
		cin >> A[i] >> B[i] >> C[i];

	for (int i = 1; i < M; i++) {
		if (P[i] < P[i + 1]) {
			for (int p = P[i]; p < P[i + 1]; p++) {
				R[p]++;
			}
		}
		else {
			for (int p = P[i]; p > P[i + 1]; p--) {
				R[p - 1]++;
			}
		}
	}

	/*
	for (int i = 1; i < N; i++) {
		cout << R[i] << " ";
	}
	*/

	LL ans = 0;
	for (int i = 1; i < N; i++) {
		cheap[i] = min(A[i] * R[i], B[i] * R[i] + C[i]);
		ans += (LL)cheap[i];
	}

	cout << ans << endl;

	return 0;
}

