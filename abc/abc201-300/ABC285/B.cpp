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

	for (int i = 1; i < S.size(); i++) {
		int ans = 0;
		for (int k = 0; k + i < S.size(); k++) {

			ans = k;

			if (S[k] == S[k + i]) {
				break;
			}
			else {
				ans = k + 1;
			}
		}

		cout << ans << endl;
	}



	return 0;
}
