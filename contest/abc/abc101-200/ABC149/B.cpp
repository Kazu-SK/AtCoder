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
	LL A = 0, B = 0, K = 0;
	LL ans_A = 0;
	LL ans_B = 0;


	cin >> A >> B >> K;


	ans_A = max((LL)0, A - K);
	K = max((LL)0, K - A);

	ans_B = max((LL)0, B - K);

	cout << ans_A << " " << ans_B << endl;

	return 0;
}

