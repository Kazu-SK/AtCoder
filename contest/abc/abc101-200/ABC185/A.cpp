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
	int A[4];
	int ans = 1e9;


	for (int i = 0; i < 4; i++) {
		cin >> A[i];
		ans = min(ans, A[i]);
	}

	cout << ans << endl;

	return 0;
}

