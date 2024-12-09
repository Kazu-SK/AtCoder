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
	vector<int> B(N);


	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];


	double expected_value = 0.0;

	for (int i = 0; i < N; i++) {
		expected_value += (double)A[i] / 3;
		expected_value += (double)B[i] / 3 * 2;
	}

	printf("%.3f", expected_value);

	return 0;
}

