#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> A(N, 0);
    vector<int> T(A.size());
    vector<int> B(N, 0);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    copy(A.begin(), A.end(), T.begin());
    sort(T.begin(), T.end());

    T.erase(unique(T.begin(), T.end()), T.end());

    for (int i = 0; i < N; i++) {
        B[i] = lower_bound(T.begin(), T.end(), A[i]) - T.begin();
        B[i] += 1;
    }

    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }

    return 0;
}

