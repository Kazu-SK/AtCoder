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
	int end_itr = 0;


	cin >> S;



	for (int i = 0; i < S.size(); i++) {

		ans.push_back(S[i]);
		end_itr = ans.size() - 1;

		if (ans.size() == 1){
			continue;
		}

		if ((ans[end_itr - 1] == '(' && ans[end_itr] == ')') || (ans[end_itr - 1] == '<' && ans[end_itr] == '>') || (ans[end_itr - 1] == '[' && ans[end_itr] == ']')) {
			ans.pop_back();
			ans.pop_back();
		}
	}

	if (ans == "")
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

