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
	string D;
	string NEWS[8] = { "N","S","W","E","NE","SW","NW","SE" };
	map<string, string> Map;

	for (int i = 0; i < 8; i += 2) {
		Map[NEWS[i]] = NEWS[i + 1];
		Map[NEWS[i + 1]] = NEWS[i];
	}

	cin >> D;

	cout << Map[D] << endl;

	return 0;
}

