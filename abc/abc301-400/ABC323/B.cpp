
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;

    cin >> N;


    vector<vector<char>> S(N + 1, vector<char>(N + 1, 0));

    vector<int> sum(N + 1, 0);
    vector<int> ans(1, 0);


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> S[i][j];

            if (S[i][j] == 'o') {
                sum[i] += 1;
            }
        }

        ans.push_back(i);
    }

    for (int i = 1; i < N; i++) {
        for (int j = i + 1; j <= N; j++) {

            int tmp = 0;

            if ((sum[i] < sum[j]) || (sum[i] == sum[j] && ans[i] > ans[j])) {

                tmp = ans[i];
                ans[i] = ans[j];
                ans[j] = tmp;

                tmp = sum[i];
                sum[i] = sum[j];
                sum[j] = tmp;
            }
        }

    }

    for (int i = 1; i <= N; i++) {
        cout << ans[i] << endl;

    }

    return 0;
}

