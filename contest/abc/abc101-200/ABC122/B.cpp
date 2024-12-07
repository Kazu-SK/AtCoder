
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
    string p_S;
	int ans = 0;

    cin >> S;

	for (int start = 0; start < S.size(); start++) {
		for (int end = 0; end < S.size(); end++) {

			bool judge = true;

			for (int itr = start; itr <= end; itr++) {

				if(S[itr] == 'A' || S[itr] == 'C' || S[itr] == 'G' || S[itr] == 'T')
					p_S.push_back(S[itr]);
				else {
					judge = false;
					break;
				}
			}

			if (judge == true) {
				ans = max(ans, (int)p_S.size());
			}

			p_S.clear();
		}
	}

	cout << ans << endl;

    return 0;
}

