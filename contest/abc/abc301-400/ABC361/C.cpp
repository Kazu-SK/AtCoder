
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
    int N = 0, K = 0;
    LL ans  = 1e10;


    cin >> N >> K;

    vector<LL> A(N + 1, 0);


    for (int i = 1; i <= N; i++)
        cin >> A[i];

    sort(A.begin(), A.end());
    
    for (int i = 1; i <= K + 1; i++) {
        ans = min(ans, A[N - K + i - 1] - A[i]);
    }

    cout << ans << endl;


    return 0;
}



