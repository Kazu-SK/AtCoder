#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string S, T;

    cin >> S >> T;

    vector<vector<int>> dp(S.size() + 1, vector<int>(T.size() + 1, 0));

    int S_size = S.size();
    int T_size = T.size();

    for (int S_char = 1; S_char <= S_size; S_char++) {
        for (int T_char = 0; T_char <= T_size; T_char++) {

            if (S_char >= 1 && T_char >= 1 && S[S_char - 1] == T[T_char - 1]) {
                dp[S_char][T_char] = max({ dp[S_char][T_char - 1], dp[S_char - 1][T_char], dp[S_char - 1][T_char - 1] + 1 });
            }
            else if (T_char >= 1) {
                dp[S_char][T_char] = max(dp[S_char - 1][T_char], dp[S_char][T_char - 1]);
            }
            else if (S_char >= 1) {
                dp[S_char][T_char] = dp[S_char - 1][T_char];
            }
            else {
            }
        }
    }

    cout << dp[S_size][T_size] << endl;

    return 0;
}
