
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
    int N = 0, K = 0;


    cin >> N >> K;


    vector<int> A(N);
    vector<int> B(K);
    vector<int> A_n;

    int max = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        A_n.push_back(i + 1);
    }

    for (int i = 0; i < K; i++)
        cin >> B[i];


    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int tmp = 0;

            if (A[i] < A[j]) {
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;

                tmp = A_n[i];
                A_n[i] = A_n[j];
                A_n[j] = tmp;
            }
        }
    }
    /*
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < A.size(); i++) {
        cout << A_n[i] << " ";
    }
    cout << endl;
    */

    int most_A = A[0];
    int i = 0;
    bool judge = false;

    while (most_A == A[i]) {

        for (int j = 0; j < B.size(); j++) {
            if (B[j] == A_n[i]) {
                judge = true;
            }
        }

        if (i < A.size())
            i++;
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

