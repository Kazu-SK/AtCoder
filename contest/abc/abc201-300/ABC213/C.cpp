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
	int H = 0, W = 0, N = 0;


	cin >> H >> W >> N;

	vector<int> A(N + 1, 0);
	vector<int> comp_A(N + 1, 0);
	vector<int> sort_A;
	vector<int> B(N + 1, 0);
	vector<int> comp_B(N + 1, 0);
	vector<int> sort_B;

	for (int i = 1; i <= N; i++) {
		cin >> A[i] >> B[i];
	}

	sort_A = A;
	sort_B = B;

	sort(sort_A.begin(), sort_A.end());
	sort(sort_B.begin(), sort_B.end());

	sort_A.erase(unique(sort_A.begin(), sort_A.end()), sort_A.end());
	sort_B.erase(unique(sort_B.begin(), sort_B.end()), sort_B.end());

	for (int i = 1; i <= N; i++) {
		comp_A[i] = lower_bound(sort_A.begin(), sort_A.end(), A[i]) - sort_A.begin();
		comp_B[i] = lower_bound(sort_B.begin(), sort_B.end(), B[i]) - sort_B.begin();
	}

	for (int i = 1; i <= N; i++) {
		cout << comp_A[i] << " " << comp_B[i] << endl;
	}

	return 0;
}

