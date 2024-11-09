#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int S = 0;


    cin >> N >> S;

    int offset = 1;
    vector<int> A(N + offset, 0);
    vector<vector<bool>> DP(N + offset, vector<bool>(S + offset, false));


    for (int i = 1; i <= N; i++)
        cin >> A[i];


    for (int i = 0; i <= S; i++) {
        if (i == 0)
            DP[0][i] = true;
        else
            DP[0][i] = false;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {

            if ((DP[i - 1][j] == true) || (j - A[i] >= 0 && DP[i - 1][j - A[i]]))
                DP[i][j] = true;
        }
    }

    if (DP[N][S] == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

