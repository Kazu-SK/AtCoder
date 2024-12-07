#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{

	string N, S;


	cin >> N >> S;

	int S_size = S.size();
	int N_size = N.size();

	const int offset = 1;
	vector<vector<int>> dp(S_size + offset, vector<int>(N_size + offset));



	for (int N_char = 1; N_char <= N_size; N_char++)
		dp[0][N_char] = N_char;

	for (int S_char = 1; S_char <= S_size; S_char++)
		dp[S_char][0] = S_char;


	for (int S_char = 1; S_char <= S_size; S_char++) {
		for (int N_char = 1; N_char <= N_size; N_char++) {

			if (N[N_char - 1] == S[S_char - 1])
				dp[S_char][N_char] = min({ dp[S_char - 1][N_char] + 1, dp[S_char][N_char - 1] + 1, dp[S_char - 1][N_char - 1] });
			else
				dp[S_char][N_char] = min({ dp[S_char - 1][N_char] + 1, dp[S_char][N_char - 1] + 1, dp[S_char - 1][N_char - 1] + 1 });
		}
	}

	cout << dp[S_size][N_size] << endl;

	return 0;
}
