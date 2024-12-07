
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


    cin >> N;
    cin >> M;


    vector<int> A(M + 1, 0);

    for (int i = 1; i <= M; i++) {
        cin >> A[i];
    }

    for (int n = 1; n <= N; n++) {

        int pos = lower_bound(A.begin(), A.end(), n) - A.begin();

        cout << A[pos] - n << endl;
    }

    return 0;
}

