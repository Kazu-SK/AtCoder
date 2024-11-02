#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, L, R;


    cin >> N >> L >> R;


    vector<int> A(N + 1, 0);
    vector<int> X(N + 1, 0);


    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }


    for (int i = 1; i <= N; i++) {

        if (A[i] <= L)
            X[i] = L;

        if (A[i] > L && A[i] < R)
            X[i] = A[i];

        if (A[i] >= R)
            X[i] = R;
    }


    for (int i = 1; i < X.size(); i++) {
        cout << X[i] << " ";
    }

    return 0;
}

