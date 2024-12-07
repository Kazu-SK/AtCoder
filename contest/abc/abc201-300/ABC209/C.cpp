
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


    vector<LL> C(N);

    for (int i = 0; i < N; i++)
        cin >> C[i];


    sort(C.begin(), C.end());

    LL ans = 1;

    for (int i = 1; i < N; i++) {

        ans *= C[i] - i;

        ans %= (LL)1e9 + 7;
    }

    ans *= C[0];
    ans %= (LL)1e9 + 7;

    cout << ans << endl;

    return 0;
}

