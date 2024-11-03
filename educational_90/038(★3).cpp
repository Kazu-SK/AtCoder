#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL GCD(LL a, LL b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main()
{
    LL A = 0, B = 0;
    LL ans = 0;
    LL LIMIT = 1e18;
    LL j = 0;


    cin >> A >> B;


    ans = B / GCD(A, B);

    if (ans > LIMIT / A) {
        cout << "Large" << endl;
    }
    else {
        cout << ans * A << endl;
    }


    return 0;
}

