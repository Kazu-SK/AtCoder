#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long N, W;


    cin >> N >> W;


    const long long not_select = 1000000000000000;
    const int offset = 1;
    const int limit_v = 1000;
    const int limit_n = 100;
    const int max_v = limit_v * limit_n;

    vector<long long> w(N + offset, not_select);
    vector<long long> v(N + offset, not_select);
    vector<vector<long long>> dp(N + offset, vector<long long>(max_v + offset, not_select));


    for (int i = 1; i <= N; i++)
        cin >> w[i] >> v[i];

    dp[0][0] = 0;

    long long select_pattern[2] = { not_select };

    for (int i = 1; i <= N; i++) { //品物iまで
        for (long long j = 0; j <= max_v; j++) { //価値max_vまで

            if (dp[i - 1][j] >= 0) {
                select_pattern[0] = dp[i - 1][j];
            }

            if (j - v[i] >= 0 && dp[i - 1][j - v[i]] >= 0) {
                select_pattern[1] = dp[i - 1][j - v[i]] + w[i];
            }

            if (select_pattern[0] < not_select || select_pattern[1] < not_select) {

                dp[i][j] = min(select_pattern[0], select_pattern[1]);

                for (int k = 0; k <= 1; k++)
                    select_pattern[k] = not_select;
            }
        }
    }

    long long answer = 0;
    for (long long j = 0; j <= max_v; j++) {

        if (dp[N][j] >= 0 && dp[N][j] <= W) {
            answer = j;
        }
    }

    cout << answer << endl;

    return 0;
}


