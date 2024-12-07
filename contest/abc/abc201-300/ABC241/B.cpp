
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;


    vector<int> A(N);
    vector<int> B(M);


    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    for (int b = 0; b < M; b++) {
        bool judge = false;
        for (int a = 0; a < A.size(); a++) {
            if (B[b] == A[a]) {
                A.erase(A.begin() + a);
                judge = true;
                break;
            }
        }

        /*
        for (int a = 0; a < A.size(); a++) {
            cout << A[a] << " ";
        }
        */
        cout << endl;

        if (judge == false) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

