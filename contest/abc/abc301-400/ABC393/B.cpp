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
	vector<int> B_pos;


	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'B')
			B_pos.push_back(i);
	}

	int ans = 0;

	for (int i = 0; i < B_pos.size(); i++) {

		int diff_pos = 1;

		while (true) {

			int right_pos = B_pos[i] + diff_pos;
			int left_pos = B_pos[i] - diff_pos;

			if (right_pos >= S.size())
				break;

			if (left_pos < 0)
				break;

			if (S[left_pos] == 'A' && S[right_pos] == 'C')
				ans++;

			diff_pos++;
		}
	}

	cout << ans << endl;

	return 0;
}

