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
	int N = 0;

	cin >> N;

	vector<char> S(N);
	vector<int> slash_pos;
	int ans = 1;

	for (int i = 0; i < N; i++) {
		cin >> S[i];

		if (S[i] == '/')
			slash_pos.push_back(i);
	}

	for (int i = 0; i < slash_pos.size(); i++) {

		int left = slash_pos[i] - 1;
		int right = slash_pos[i] + 1;
		int counter = 1;

		while (true) {
			if (left < 0)break;
			if (right >= N)break;

			if (S[left] == '1' && S[right] == '2') {
				counter += 2;
				left--;
				right++;
			}
			else
				break;
		}

		ans = max(ans, counter);
	}

	cout << ans << endl;

	return 0;
}

