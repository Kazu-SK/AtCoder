
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	int num[4] = { 0 };
	int ans = -1e7;


	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 2; j < 4; j++) {
			ans = max(ans, num[i] - num[j]);
		}
	}

	cout << ans << endl;


	return 0;
}

