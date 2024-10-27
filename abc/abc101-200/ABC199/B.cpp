
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


    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }


    int A_max = 0;
    int B_min = 1e9;

    for (int i = 0; i < N; i++) {

        A_max = max(A_max, A[i]);
        B_min = min(B_min, B[i]);
    }

    int ans = 0;

    if (A_max <= B_min) {
        ans = B_min - A_max + 1;
    }
    else {
        ans = 0;
    }

    cout << ans << endl;

    return 0;
}

