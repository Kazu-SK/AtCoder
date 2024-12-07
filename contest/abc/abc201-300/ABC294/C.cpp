
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
    int N = 0;
    int M = 0;


    cin >> N >> M;


    vector<int> A(N);
    vector<int> B(M);
    vector<int> C;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        C.push_back(A[i]);
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
        C.push_back(B[i]);
    }


    sort(C.begin(), C.end());


    for (int i = 0; i < N; i++) {
        int pos = lower_bound(C.begin(), C.end(), A[i]) - C.begin();

        if (pos >= 0 && pos < C.size()) {
            cout << pos + 1 << " ";
        }
    }

    cout << endl;

    for (int i = 0; i < M; i++) {
        int pos = lower_bound(C.begin(), C.end(), B[i]) - C.begin();

        if (pos >= 0 && pos < C.size()) {
            cout << pos + 1 << " ";
        }
    }


    return 0;
}

