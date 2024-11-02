#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N = 0;

    cin >> N;


    vector<int> A(N + 1, 0);
    vector<int> B(N, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < N; i++) {
        B[i] = A[i] * A[i + 1];

        cout << B[i] << " ";
    }



    return 0;
}

