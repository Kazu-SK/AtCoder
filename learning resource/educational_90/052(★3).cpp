
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
    LL ans = 1;
    const LL DIV = 1e9 + 7;


    cin >> N;

    vector<vector<int>> A(N, vector<int>(6));
    vector<int> sum(N);


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> A[i][j];

            sum[i] += A[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        
        ans *= sum[i];
        ans %= DIV;
    }

    cout << ans << endl;

    return 0;
}

