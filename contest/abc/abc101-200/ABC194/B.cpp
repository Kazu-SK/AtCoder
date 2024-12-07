
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


    int ApB = 1e9;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];

        ApB = min(ApB, A[i] + B[i]);
    }

    int ans = 1e9;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N ; j++) {

            if (i == j)continue;

            ans = min(ans, max(A[i], B[j]));
        }
    }

    if (ApB < ans) {
        cout << ApB << endl;
    }
    else {
        cout << ans << endl;
    }

    return 0;
}

