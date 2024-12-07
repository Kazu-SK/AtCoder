
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N, 0);

    for (int i = 0; i < N; i++)
        cin >> A[i];


    sort(A.begin(), A.end());

    for (int i = 1; i < N; i++) {

        if (A[i] != A[i - 1] + 1) {
            cout << A[i - 1] + 1 << endl;
            break;
        }
    }

    return 0;
}

