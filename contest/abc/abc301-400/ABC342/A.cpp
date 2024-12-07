#include <iostream>
#include <vector>


using namespace std;

int main()
{
	string S;
	vector<char> C;
	vector<int> count(2);
	vector<int> ans(2);

	cin >> S;

	C.push_back(S[0]);
	count[0] = 1;
	ans[0] = 1;


	for (int i = 1; i < S.size(); i++) {
		if (C[0] != S[i]) {

			if (C.size() == 1) {
				C.push_back(S[i]);
				ans[1] = i + 1;
			}

			count[1]++;
		}
		else {
			count[0]++;
		}

		if ((count[0] >= 2 && count[1] >= 1) || (count[0] >= 1 && count[1] >= 2)) {
			break;
		}
	}


	if (count[0] == 1) {
		cout << ans[0] << endl;
	}
	else {
		cout << ans[1] << endl;
	}

	return 0;
}
