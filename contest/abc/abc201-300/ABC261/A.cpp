
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

    int L[2] = { 0 };
    int R[2] = { 0 };


    for (int i = 0; i < 2; i++) {
        cin >> L[i] >> R[i];
    }

    int ans = 0;

    ans = max(0, min(R[0], R[1]) - max(L[0], L[1]));

    cout << ans << endl;

    return 0;
}

