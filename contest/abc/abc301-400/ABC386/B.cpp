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
	int ans = 0;


	cin >> S;

	int itr = 0;
	while (itr < S.size()) {

		if (itr < S.size() - 1) {
			if (S[itr] == '0' && S[itr + 1] == '0') {
				itr += 2;
			}
			else {
				itr++;
			}
		}
		else {
			itr++;
		}

		ans++;
		//cout << "itr = " << itr << " " << "ans = " << ans << endl;
	}

	cout << ans << endl;

	return 0;
}

