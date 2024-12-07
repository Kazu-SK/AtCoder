#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N);
    vector<int> B(N - 1);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++) {
        cin >> B[i];
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());


    int A_itr = 0;
    int B_itr = 0;
    int ans = 0;

    while (A_itr < A.size() && B_itr < B.size()) {
        if (A[A_itr] > B[B_itr]) {
            B.insert(B.begin() + B_itr, A[A_itr]);
            ans = A[A_itr];
            //cout << "test1" << endl;
            break;
        }

        A_itr++;
        B_itr++;
    }

    //cout << "test" << endl;


    if (ans == 0) {
        ans = A[A_itr];
    }

    /*
    for (int i = 0; i < N; i++) {
        cout << A[i] << " " << B[i] << endl;
    }
    */

    while (A_itr < A.size() && B_itr < B.size()) {
        if (A[A_itr] > B[B_itr]) {
            ans = -1;
            break;
        }

        A_itr++;
        B_itr++;
    }

    cout << ans << endl;

    return 0;
}

