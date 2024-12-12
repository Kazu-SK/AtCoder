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
	double Answer = 0.0;


	cin >> N;


	for (int i = 1; i <= N; i++) {
		Answer += 1.0 * N / i;
	}

	printf("%.12f\n", Answer);

	return 0;
}

