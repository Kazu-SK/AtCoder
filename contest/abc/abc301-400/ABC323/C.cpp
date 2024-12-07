
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;

    vector<int> sum_A(N);
    vector<int> A(M);
    vector<vector<int>> A_amari(N);
    vector<vector<char>> S(N, vector<char>(M, 0));

    int max_sum_A = 0;

    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> S[i][j];

            if (S[i][j] == 'o') {
                sum_A[i] += A[j];
            }
            else {
                A_amari[i].push_back(A[j]);
            }
        }
        sum_A[i] += i + 1;

        max_sum_A = max(max_sum_A, sum_A[i]);
    }


    int ans = 0;

    for (int i = 0; i < N; i++) {

        sort(A_amari[i].rbegin(), A_amari[i].rend());

        ans = 0;

        while (true) {
            if (sum_A[i] < max_sum_A) {
                sum_A[i] += A_amari[i][ans++];
            }
            else {
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

