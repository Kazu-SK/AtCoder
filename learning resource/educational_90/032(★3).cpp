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


    cin >> N;

    vector<vector<int>> A(N, vector<int>(N, 0));
    vector<int> run;
    map<int, vector<int>> bad;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }

        run.push_back(i);
    }

    cin >> M;

    vector<int> X(M);
    vector<int> Y(M);

    for (int i = 0; i < M; i++) {
        cin >> X[i] >> Y[i];

        X[i]--;
        Y[i]--;

        bad[X[i]].push_back(Y[i]);
        bad[Y[i]].push_back(X[i]);
    }

    LL ans = 1e18;

    do {

        bool run_judge = true;

        for (int i = 1; i < run.size(); i++) {
            for (int j = 0; j < bad[run[i]].size(); j++) {
                if (run[i - 1] == bad[run[i]][j]) {
                    run_judge = false;
                }
            }
        }

        if (run_judge) {

            LL time = 0;

            for (int i = 0; i < N; i++) {
                time += A[run[i]][i];
            }

            ans = min(ans, time);
        }

    } while (next_permutation(run.begin(), run.end()));


    if (ans == 1e18) {
        cout << -1 << endl;
    }
    else {
        cout << ans << endl;
    }


    return 0;
}

