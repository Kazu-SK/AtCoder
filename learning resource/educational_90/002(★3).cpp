#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using uLL = unsigned long long;

uLL Pow(int x, int y) { //ans = x^y

	uLL ans = 1;

	for (int i = 0; i < y; i++) {
		ans *= x;
	}

	return ans;
}


int main()
{
	int N = 0;
	string S;
	vector<string> ans_S;

	cin >> N;

	if (N % 2 == 1) {
		return 0;
	}

	uLL i_max = 0;

	i_max = Pow(2, N);

	for (uLL i = 0; i < i_max; i++) {

		int kakko_num = 0;

		kakko_num = 0;
		S = "";

		for (int j = 0; j < N; j++) {

			uLL wari = 1 << j;

			if ((i / wari) % 2 == 1) {
				kakko_num--;
				S.insert(S.begin(), '(');
			}
			else {
				kakko_num++;
				S.insert(S.begin(), ')');
			}

			if (kakko_num < 0) {
				break;
			}
		}

		if (kakko_num == 0) {
			ans_S.push_back(S);
		}
	}

	sort(ans_S.begin(), ans_S.end());

	for (int i = 0; i < ans_S.size(); i++) {
		cout << ans_S[i] << endl;
	}

	return 0;
}

