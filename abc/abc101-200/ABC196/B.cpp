
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
	string S;


	cin >> S;


	for (int i = 0; i < S.size(); i++) {
		if (S[i] != '.') {
			cout << S[i];
		}
		else {
			break;
		}
	}

	return 0;
}

