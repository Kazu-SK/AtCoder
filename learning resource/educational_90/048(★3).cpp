
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
    LL ans = 0;

    cin >> N >> K;


    vector<LL> A(N);
    vector<LL> B(N);
    vector<LL> AB_diff(N);
    vector<LL> all;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];

        AB_diff[i] = A[i] - B[i];

        all.push_back(B[i]);
        all.push_back(AB_diff[i]);
    }

    sort(all.rbegin(), all.rend());

    for (int time = 0; time < K; time++) {
        ans += all[time];
    }

    cout << ans << endl;

    return 0;
}

