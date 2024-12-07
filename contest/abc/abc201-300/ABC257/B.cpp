
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
    
    int N = 0, K = 0, Q = 0;


    cin >> N >> K >> Q;


    vector<int> A(K + 1, -1);
    vector<int> L(Q);


    for (int i = 1; i <= K; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < Q; i++)
        cin >> L[i];

    for (int i = 0; i < Q; i++) {

        if (A[L[i]] == N)
            continue;

        if (L[i] < K && (A[L[i] + 1] == A[L[i]] + 1))
            continue;

        A[L[i]]++;
    }

    for (int i = 1; i < A.size(); i++) {
        cout << A[i] << " ";
    }

    return 0;
}

