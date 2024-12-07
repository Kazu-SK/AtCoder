#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    int N = 0;

    cin >> N;


    int offset = 2;
    vector<int> A(N + offset, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }


    int D = 0;

    cin >> D;
    vector<int> L(D + offset, 0);
    vector<int> R(D + offset, 0);

    for (int i = 1; i <= D; i++) {
        cin >> L[i] >> R[i];
    }

    vector<int> P(N + offset, 0);
    vector<int> Q(N + offset, 0);

    for (int i = 1; i <= N; i++) {
        P[i] = max(P[i - 1], A[i]);
    }

    for (int i = N; i > 0; i--) {
        Q[i] = max(Q[i + 1], A[i]);
    }

    for (int i = 1; i <= D; i++) {
        cout << max(P[L[i] - 1], Q[R[i] + 1]) << endl;
    }

    return 0;
}

