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
	int X = 0;


	cin >> X;


	int ans = 100 - (X % 100);

	cout << ans << endl;


	return 0;
}

