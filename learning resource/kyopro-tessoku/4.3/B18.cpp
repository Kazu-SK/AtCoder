#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;
    int S = 0;


    cin >> N >> S;

    int offset = 1;
    vector<int> A(N + offset, 0);
    vector<vector<bool>> DP(N + offset, vector<bool>(S + offset, false));
    vector<int> answer_root;

    const int none_code = -1;


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

    if (DP[N][S] == true) {
        int search_n = N;
        int search_s = S;


        while (search_s != 0) {

            if (DP[search_n][search_s] == true && DP[search_n - 1][search_s] == false) {
                answer_root.push_back(search_n);
                search_s = search_s - A[search_n];
            }
            else if (DP[search_n][search_s] == true && DP[search_n - 1][search_s] == true) {

                for (;;) {
                    if (DP[search_n][search_s] == true && DP[search_n - 1][search_s] == true)
                        search_n--;
                    else
                        break;
                }

                answer_root.push_back(search_n);
                search_s = search_s - A[search_n];
            }
            else {
            }

            search_n--;
        }

        reverse(answer_root.begin(), answer_root.end());

        cout << answer_root.size() << endl;

        for (int i = 0; i < answer_root.size(); i++)
            cout << answer_root[i] << " ";

    }
    else
        cout << none_code << endl;



    return 0;
}

