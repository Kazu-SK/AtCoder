
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
    int L = 0;
    LL DIV = 1e9 + 7;


    cin >> N >> L;

    vector<LL> dp(N + 1);

    dp[0] = 1;

    for (int i = 1; i <= N; i++) {

        if (i - L < 0)
            dp[i] = dp[i - 1];
        else
            dp[i] = (dp[i - 1] + dp[i - L]) % DIV;
    }

    cout << dp[N] << endl;

    return 0;
}

