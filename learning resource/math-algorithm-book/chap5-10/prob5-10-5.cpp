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

bool PowerComparison(LL a, LL b, LL c) {  //c^b > a

	if (c == 1)
		return false;

	LL v = 1;
	for (int i = 1; i <= b; i++) {

		if (a / c < v) {
			return true;
		}

		v *= c;
	}

	return false;
}


int main()
{
	LL a = 0, b = 0, c = 0;
	bool judge;


	cin >> a >> b >> c;


	judge = PowerComparison(a, b, c);

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

