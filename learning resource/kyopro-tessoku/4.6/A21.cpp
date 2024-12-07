#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N = 0;


    cin >> N;

    int offset = 1;
    vector<vector<int>> dp(N + offset, vector<int>(N + offset, 0));
    vector<int> P(N + offset, 0);
    vector<int> A(N + offset, 0);


    for (int i = 1; i <= N; i++)
        cin >> P[i] >> A[i];



    for (int block_R = N - 1; block_R >= 1; block_R--) {

        if (P[block_R + 1] >= 1 && P[block_R + 1] <= block_R) {
            dp[1][block_R] = dp[1][block_R + 1] + A[block_R + 1];
        }
        else {
            dp[1][block_R] = dp[1][block_R + 1];
        }
    }


    for (int block_L = 2; block_L <= N; block_L++) {
        if (P[block_L - 1] >= block_L && P[block_L - 1] <= N) {
            dp[block_L][N] = dp[block_L - 1][N] + A[block_L - 1];
        }
        else {
            dp[block_L][N] = dp[block_L - 1][N];
        }
    }


    int R_del_score = 0;
    int L_del_score = 0;

    for (int block_L = 2; block_L <= N - 1; block_L++) {
        for (int block_R = N - 1; block_R >= block_L; block_R--) {

            //L_del_score 
            if (P[block_L - 1] >= block_L && P[block_L - 1] <= block_R) {
                L_del_score = dp[block_L - 1][block_R] + A[block_L - 1];
            }
            else {
                L_del_score = dp[block_L - 1][block_R];
            }

            //R_del_score
            if (P[block_R + 1] >= block_L && P[block_R + 1] <= block_R) {
                R_del_score = dp[block_L][block_R + 1] + A[block_R + 1];
            }
            else {
                R_del_score = dp[block_L][block_R + 1];
            }

            dp[block_L][block_R] = max(R_del_score, L_del_score);
        }
    }

    /*
    for (int i = 1; i <= 4; i++) {
        for (int j = i; j <= 4; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */

    int answer = 0;
    for (int block_RL = 1; block_RL <= N; block_RL++)
        answer = max(answer, dp[block_RL][block_RL]);

    cout << answer << endl;

    return 0;
}

