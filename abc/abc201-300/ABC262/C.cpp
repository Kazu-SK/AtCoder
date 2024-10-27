
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
    int N;
    //map<pair<int, int>, bool> Map;


    cin >> N;

    vector<int> A(N + 1);


    for (int i = 1; i <= N; i++)
        cin >> A[i];


    LL ans = 0;

    for (int i = 1; i <= N; i++) {

        int itr = A[i];

        if (i == A[itr] && A[i] != i) {
            ans++;
        }
    }

    ans /= 2;


    LL equal = 0;
    LL comb = 0;

    for (int i = 1; i <= N; i++) {
        if (A[i] == i) {
            equal++;
        }
    }

    comb = equal * (equal - 1) / 2;

    ans = ans + comb;

    cout << ans << endl;

    return 0;
}

