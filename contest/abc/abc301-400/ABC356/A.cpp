#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0, L = 0, R = 0;


    cin >> N >> L >> R;

    vector<int> A(N, 0);


    for (int i = 0; i < N; i++) {
        A[i] = i + 1;
    }

    L -= 1;
    R -= 1;


    int tmp = 0;
    for (int i = L; i < R; i++) {

        for (int j = i + 1; j <= R; j++) {

            if (A[i] < A[j]) {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }


    return 0;
}

