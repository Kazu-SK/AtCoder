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
    int Q = 0;


    cin >> N >> Q;

    vector<LL> A(N + 1);
    vector<LL> diff(N + 1); //前の区画との差
    vector<LL> L(Q);
    vector<LL> R(Q);
    vector<LL> V(Q);

    LL ans = 0;


    for (int i = 1; i <= N; i++)
        cin >> A[i];

    for (int i = 0; i < Q; i++)
        cin >> L[i] >> R[i] >> V[i];


    for (int i = 2; i <= N; i++) {
        diff[i] = A[i] - A[i - 1];
        ans += abs(diff[i]);
    }

    for (int i = 0; i < Q; i++) {

        if (L[i] > 1) {
            ans -= abs(diff[L[i]]);
            diff[L[i]] += V[i];
            ans += abs(diff[L[i]]);
        }

        if (R[i] < N) {
            ans -= abs(diff[R[i] + 1]);
            diff[R[i] + 1] -= V[i];
            ans += abs(diff[R[i] + 1]);
        }

        cout << ans << endl;
    }

    return 0;
}

