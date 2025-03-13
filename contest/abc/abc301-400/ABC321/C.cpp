#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
	llong K = 0;
	vector<llong> all;


	cin >> K;



	for (int num = 2; num < (1 << 10); num++) { //321-like Numberに0が含まれてはいけないため2からスタート

		llong x = 0;

		for (int i = 9; i >= 0; i--) {
			if (num & (1 << i)) {
				x *= 10;
				x += i;
			}
		}

		all.push_back(x);
	}

	sort(all.begin(), all.end());

	cout << all[K - 1] << endl;


	return 0;
}

