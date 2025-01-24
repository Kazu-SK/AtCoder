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
	double Sx = 0, Sy = 0;
	double Gx = 0, Gy = 0;
	double a = 0;
	double b = 0;
	double ans = 0;


	cin >> Sx >> Sy >> Gx >> Gy;

	Gy *= -1;

	a = (Gy - Sy) / (Gx - Sx);
	b = Gy - a * Gx;

	ans = -b / a;

	printf("%.6f\n", ans);

	return 0;
}

