
/****************************

reverse(string S)を使った回文判定
引数として渡されたSを逆読みにして戻り値として返す。

************************/

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

string reverse(string s) { 

	string ans_s;

	for (int i = s.size() - 1; i >= 0; i--) {
		ans_s.push_back(s[i]);
	}

	return ans_s;
}

int main()
{
	int N = 0;

	cin >> N;


	vector<string> S(N + 1);

	for (int i = 1; i <= N; i++)
		cin >> S[i];


	for (int i = 1; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {

			bool ans[2] = { false };

			string sum_s;

			sum_s += S[i] + S[j];
			if (sum_s == reverse(sum_s))
				ans[0] = true;

			sum_s.clear();
			sum_s += S[j] + S[i];

			if (sum_s == reverse(sum_s))
				ans[1] = true;

			if (ans[0] == true || ans[1] == true) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}


	cout << "No" << endl;

	return 0;
}

