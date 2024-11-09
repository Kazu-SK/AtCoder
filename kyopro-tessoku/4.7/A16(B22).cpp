#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> A(N + 1, 0);
    vector<int> B(N + 1, 0);
    vector<long long> dp(N + 1, 100000000);


    for (int A_i = 2; A_i <= N; A_i++)
        cin >> A[A_i];

    for (int B_i = 3; B_i <= N; B_i++)
        cin >> B[B_i];


    dp[1] = 0;

    for (int room = 1; room <= N - 1; room++) {

        if (room == N - 1)
            dp[room + 1] = min(dp[room + 1], dp[room] + A[room + 1]);
        else {
            dp[room + 2] = min(dp[room + 2], dp[room] + B[room + 2]);
            dp[room + 1] = min(dp[room + 1], dp[room] + A[room + 1]);
        }

    }

    cout << dp[N] << endl;

    return 0;
}

