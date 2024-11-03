#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int K = 0;


    cin >> N >> K;

    vector<int> A(N + 1, 0);
    vector<int> B(N + 1, 0);
    vector<int> AB_Diff(N + 1, 0);
    vector<int> AB_Diff_acc(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {
        cin >> B[i];
    }

    for (int i = 1; i <= N; i++) {

        if (A[i] - B[i] < 0)
            AB_Diff[i] = B[i] - A[i];
        else
            AB_Diff[i] = A[i] - B[i];

        AB_Diff_acc[i] += AB_Diff_acc[i - 1] + AB_Diff[i];
    }


    if (AB_Diff_acc[N] <= K) {

        if ((K - AB_Diff_acc[N]) % 2 == 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

