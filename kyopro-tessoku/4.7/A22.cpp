#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{

    int N = 0;


    cin >> N;

    vector<int> dp(N + 1, -150);
    vector<int> A(N, 0);
    vector<int> B(N, 0);


    for (int i = 1; i < N; i++)
        cin >> A[i];

    for (int i = 1; i < N; i++)
        cin >> B[i];

    const int masu_score_A = 100;
    const int masu_score_B = 150;

    dp[1] = 0;

    for (int masu = 1; masu < N; masu++) {

        dp[A[masu]] = max(dp[A[masu]], dp[masu] + masu_score_A);
        dp[B[masu]] = max(dp[B[masu]], dp[masu] + masu_score_B);
    }

    cout << dp[N] << endl;

    return 0;
}

