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
	int card[4];
	set<int> s;


	for (int i = 0; i < 4; i++) {
		cin >> card[i];
		s.insert(card[i]);
	}

	if (s.size() == 2) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}

