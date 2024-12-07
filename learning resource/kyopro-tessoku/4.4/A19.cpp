#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long N, W;


    cin >> N >> W;


    const int not_select = -100000;
    const int offset = 1;
    vector<long long> w(N + offset, not_select);
    vector<long long> v(N + offset, not_select);
    vector<vector<long long>> dp(N + offset, vector<long long>(W + offset, not_select));


    for (int i = 1; i <= N; i++)
        cin >> w[i] >> v[i];

    dp[0][0] = 0;

    long long select_pattern[2] = { not_select };

    for (long long i = 1; i <= N; i++) { //品物iまで
        for (long long j = 0; j <= W; j++) { //重さjまで



            if (dp[i - 1][j] >= 0) {
                select_pattern[0] = dp[i - 1][j];
            }

            if (j - w[i] >= 0 && dp[i - 1][j - w[i]] >= 0) {
                select_pattern[1] = dp[i - 1][j - w[i]] + v[i];
            }

            if (select_pattern[0] > not_select || select_pattern[1] > not_select) {

                dp[i][j] = max(select_pattern[0], select_pattern[1]);

                for (int k = 0; k <= 1; k++)
                    select_pattern[k] = not_select;
            }
        }
    }



    /*
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= W; j++) {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }
    */


    long long answer = dp[N][0];
    for (int j = 1; j <= W; j++) {

        if (answer < dp[N][j])
            answer = dp[N][j];
    }

    cout << answer;

    return 0;
}


