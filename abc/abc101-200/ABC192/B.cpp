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
	string S;
	bool judge = true;


	cin >> S;


	for (int i = 0; i < S.size(); i++) {

		int num = 0;

		if ((i + 1) % 2 == 1)
			num = S[i] - 'a';
		else 
			num = S[i] - 'A';

		if (num >= 0 && num <= 25) {
			judge = true;
		}
		else {
			judge = false;
			break;
		}
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

