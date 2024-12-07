
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    int M = 0;
    LL ans = 0;


    cin >> N >> M;

    vector<vector<LL>> A(N, vector<LL>(M, 0));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    for (int mf = 0; mf < M - 1; mf++) {
        for (int ms = mf + 1; ms < M; ms++) {

            LL sum = 0;

            for (int n = 0; n < N; n++) {
                sum += max(A[n][mf],A[n][ms]);
            }

            ans = max(ans, sum);
        }
    }

    cout << ans << endl;

    return 0;
}

