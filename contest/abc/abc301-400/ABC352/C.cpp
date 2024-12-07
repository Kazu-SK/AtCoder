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


    vector<LL> A(N);
    vector<LL> B(N);
    LL sum_A = 0;
    LL ans = 0;
    int max_BmA_itr = 0;
    LL max_BmA = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];

        if (B[i] - A[i] > max_BmA) {
            max_BmA_itr = i;
            max_BmA = B[i] - A[i];
        }

        sum_A += A[i];
    }

    ans = max_BmA + sum_A;

    cout << ans << endl;

    return 0;
}

