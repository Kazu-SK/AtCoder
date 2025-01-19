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
	LL X = 0;
	LL ans = 1;


	cin >> X;


	int N = 1;
	while (true) {
		
		ans *= N;

		if (ans == X)
			break;

		N++;
	}

	cout << N << endl;

	return 0;
}

