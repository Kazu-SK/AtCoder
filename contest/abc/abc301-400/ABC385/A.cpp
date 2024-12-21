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
	int ABC[3];


	for (int i = 0; i < 3; i++) {
		cin >> ABC[i];
	}

	bool judge = false;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			for (int z = j + 1; z < 3; z++) {
				if (ABC[i] == ABC[j] + ABC[z])
					judge = true;
			}
		}
	}

	if (ABC[0] == ABC[1]) {
		if (ABC[1] == ABC[2])
			judge = true;
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

