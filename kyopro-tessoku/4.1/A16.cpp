#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    int offset = 1;
    vector<int> A(N + offset, 0);
    vector<int> B(N + offset, 0);
    vector<int> DP(N + offset, 0);


    for (int i = 2; i <= N; i++)
        cin >> A[i];

    for (int i = 3; i <= N; i++)
        cin >> B[i];


    int A_root = 0;
    int B_root = 0;
    const int B_root_start = 3;

    for (int i = 1; i <= N; i++) {

        A_root = DP[i - 1] + A[i];

        if (i >= B_root_start) {
            B_root = DP[i - 2] + B[i];

            if (A_root < B_root)
                DP[i] = A_root;
            else
                DP[i] = B_root;
        }
        else {
            DP[i] = A_root;
        }
    }

    cout << DP[N] << endl;

    return 0;
}

