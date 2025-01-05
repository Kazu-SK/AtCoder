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
	LL A, B;
	LL ans = 0;


	cin >> A >> B;

	ans = (A + B) * (A + B);

	cout << ans << endl;

	return 0;
}

