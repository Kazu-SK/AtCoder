
#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
	int N = 0;


	cin >> N;

	vector<char> S(N);


	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}

	vector<char> ans;

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < 2; j++) {
			ans.push_back(S[i]);
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i];
	}

	return 0;
}

