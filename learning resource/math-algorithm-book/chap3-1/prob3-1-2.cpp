#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    LL N = 0;


    cin >> N;

    LL init = N;

    for (LL i = 2; i * i <= N; i++) {
        if (init % i == 0) {
            init /= i;
            cout << i << " ";
            i--;
        }
    }

    if (init >= 2) {
        cout << init << endl;
    }

    return 0;
}

