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
	string ans;


	cin >> S;


	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '2')
			ans.push_back(S[i]);
	}

	cout << ans << endl;

	return 0;
}

