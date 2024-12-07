
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, M = 0, X = 0, T = 0, D = 0;
    int ans = 0;

    cin >> N >> M >> X >> T >> D;

    if (M >= X && M <= N) {
        ans = T;
    }
    else {
        ans = T - (X - M) * D;
    }

    cout << ans << endl;

    return 0;
}

