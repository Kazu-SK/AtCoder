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
	int S_size = 0;
	bool judge = true;
	map<char, bool> Map;

	cin >> S;

	S_size = S.size();

	if (S_size % 2 == 0) {
		for (int i = 1; i < S.size(); i = i + 2) {

			if (S[i] != S[i - 1] || Map[S[i]] == true) {
				judge = false;
				break;
			}

			Map[S[i]] = true;
		}
	}
	else {
		judge = false;
	}

	if (judge)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;


	return 0;
}

