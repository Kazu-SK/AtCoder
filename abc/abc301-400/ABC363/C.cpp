#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int main()
{

	int N = 0;
	int K = 0;
	int ans = 0;
	map<string, int> S_list;

	cin >> N >> K;

	string S;

	cin >> S;


	sort(S.begin(), S.end());


	do {
		bool ans_judge = true;

		if (S_list[S] == 0) {

			S_list[S]++;

			for (int i = 0; i <= N - K; i++) {

				ans_judge = true;

				string s_sub = S.substr(i, K);

				for (int j = 0; j < K; j++) {

					if (s_sub[j] != s_sub[K - 1 - j]) {
						ans_judge = false;
					}
				}

				if (ans_judge == true)
					break;
			}

			if (ans_judge == false)
				ans++;

		}

	} while (next_permutation(S.begin(), S.end()));

	cout << ans << endl;

	return 0;
}

