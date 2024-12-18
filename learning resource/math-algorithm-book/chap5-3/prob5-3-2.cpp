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
	int ans = 0;


	for (int num = 0; num < (1 << 10); num++) {

		int sum = 0;
		
		for (int bit = 0; bit < 10; bit++) {
			if (num & (1 << bit)) {
				sum += (bit + 1);
			}
		}

		if (sum % 2)
			ans++;
	}

	cout << ans << endl;

	return 0;
}

