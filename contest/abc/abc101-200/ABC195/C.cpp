
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
    LL N = 0;


    cin >> N;

    LL init_N = N;
    LL calc_N = N;

    LL ans = 0;
    LL tri = 1;

    for (int i = 1; i <= 6; i++) {

        tri *= 1000;

        if (init_N >= tri) {
            ans += init_N - tri + 1;
        }
        else {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

