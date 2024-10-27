
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, M = 0;
    LL T = 0;


    cin >> N >> M >> T;

    vector<LL> A(N);
    vector<int> X(M + 1, 0);
    vector<LL> Y(M + 1, 0);
    vector<LL> sum(N + 1, 0);

    for (int i = 1; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> X[i] >> Y[i];
    }

    for (int i = 0; i < M; i++) {
        sum[X[i]] += Y[i];
    }

    sum[1] = T;
    bool judge = true;

    for (int i = 1; i < N; i++) {

        //sum[i] = T - A[i - 1];
        if (sum[i] - A[i] <= 0) {
            judge = false;
        }
        else {
            sum[i + 1] += sum[i] - A[i];
        }
    }

    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

