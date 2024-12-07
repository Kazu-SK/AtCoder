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
    int N = 0;


    cin >> N;

    vector<LL> X(N);
    vector<LL> P(N);
    vector<LL> sum(N + 1, 0);

    map<LL, LL> Map;


    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> P[i];

        if (i == 0)
            sum[i] = P[i];
        else
            sum[i] = P[i] + sum[i - 1];
    }

    int Q = 0;

    cin >> Q;

    vector<LL> L(Q);
    vector<LL> R(Q);

    for (int i = 0; i < Q; i++) {
        cin >> L[i] >> R[i];
    }

    for (int i = 0; i < Q; i++) {

        int pos_l = 0;
        int pos_r = 0;

        if (L[i] <= X[N - 1]) {
            auto p = lower_bound(X.begin(), X.end(), L[i]);
            pos_l = p - X.begin();
        }
        else {
            cout << 0 << endl;
            continue;
        }


        if (R[i] <= X[N - 1]) {
            auto p = upper_bound(X.begin(), X.end(), R[i]);
            pos_r = p - X.begin() - 1;
        }
        else {
            pos_r = N - 1;
        }

        if (R[i] < X[0]) {
            cout << 0 << endl;
            continue;
        }

        LL P_l_num = 0;
        LL P_r_num = 0;

        if (pos_l == 0) {
            P_l_num = 0;
        }
        else {
            P_l_num = sum[pos_l - 1];
        }

        P_r_num = sum[pos_r];

        cout << P_r_num - P_l_num << endl;

    }

    return 0;
}

