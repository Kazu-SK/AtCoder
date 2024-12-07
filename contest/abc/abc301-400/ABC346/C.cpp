#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    long long N = 0, K = 0;
    long long answer = 0;

    cin >> N >> K;

    vector<long long> A(N, 0);


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    answer = K * (K + 1) / 2;

    for (int i = 0; i < N; i++) {

        if (i > 0 && A[i] == A[i - 1]) {
            continue;
        }

        if (A[i] > K)
            break;

        answer -= A[i];
    }

    cout << answer << endl;

    return 0;
}

