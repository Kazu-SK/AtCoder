
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
    int N = 0, M = 0, Q = 0;


    cin >> N >> M >> Q;

    vector<LL> L(M);
    vector<LL> R(M);
    vector<LL> p(Q);
    vector<LL> q(Q);
    vector<LL> train_info(N + 2, 0);
    vector<LL> train_sum(N + 2, 0);

    for (int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];

        train_info[L[i]] += 1;
        train_info[R[i] + 1] -= 1;
    }

    for (int i = 0; i < Q; i++) {
        cin >> p[i] >> q[i];
    }

    for (int i = 1; i <= N; i++) {
        cout << train_info[i] << " ";
    }
    cout << endl;

    for (int i = 1; i <= N; i++) {
        train_sum[i] = train_info[i] + train_sum[i - 1];
        cout << train_sum[i] << " ";
    }


    return 0;
}

