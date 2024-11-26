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
	vector<LL> R(N + 2,0);
	vector<LL> cheap(N,0);

	for (int i = 1; i <= M; i++)
		cin >> P[i];

	for (int i = 1; i < N; i++)
		cin >> A[i] >> B[i] >> C[i];


	//累積和による解法
	for (int i = 1; i < M; i++) {

		int start = P[i];
		int goal = P[i + 1];

		if (start > goal) { //goal地点のほうが値が小さい場合は、goal→startの都市に移動すると仮定する。
			swap(start, goal);
		}

		R[start]++;
		R[goal]--;
	}

	for (int i = 2; i < N; i++) {
		R[i] += R[i - 1];
	}

	LL ans = 0;
	for (int i = 1; i < N; i++) {
		cheap[i] = min(A[i] * R[i], B[i] * R[i] + C[i]);
		ans += cheap[i];
	}

	cout << ans << endl;

	return 0;
}

