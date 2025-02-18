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
	string S[2];
	int ans = 0;


	cin >> S[0] >> S[1];

	if (S[0] == "sick" && S[1] == "sick")
		ans = 1;
	else {
		if (S[0] == "sick" && S[1] == "fine")
			ans = 2;
		else {
			if (S[0] == "fine" && S[1] == "sick")
				ans = 3;
			else 
				ans = 4;
		}
	}

	cout << ans << endl;

	return 0;
}

