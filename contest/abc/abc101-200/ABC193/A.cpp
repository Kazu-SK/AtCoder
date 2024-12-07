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
	int A = 0;
	int B = 0;
	double ans = 0.0;

	cin >> A >> B;


	ans = (double)(A - B) / A * 100;

	printf("%.3f\n", ans);


	return 0;
}

