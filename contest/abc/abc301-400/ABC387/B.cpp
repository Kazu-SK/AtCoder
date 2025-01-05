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
	int ans = 0;


	cin >> X;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if (i * j == X)
				continue;
			else
				ans += i * j;
		}
	}

	cout << ans << endl;

	return 0;
}

