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
	int N = 0;


	cin >> N;


	for (int i = 2; i <= N; i++) {

		bool prime = true;

		if (i == 2) {
			cout << i << " ";
			continue;
		}

		for (int j = 2; j <= i / 2; j++) {

			if (i % j == 0) {
				prime = false;
				break;
			}
		}

		if (prime)
			cout << i << " ";
	}

	return 0;
}

