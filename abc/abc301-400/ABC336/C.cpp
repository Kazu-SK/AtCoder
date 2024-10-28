
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL Base10to5(LL n) {

    LL ans = 0;

    LL i_amari;
    LL m = 1;

    if (n == 0) {
        return ans;
    }

    while (n) {

        i_amari = n % 5;
        n /= 5;

        ans += i_amari * m;

        m *= 10;
    }

    return ans;
}

int main()
{
    LL N = 0;
    LL Base5num = 0;


    cin >> N;


    N--;

    Base5num = Base10to5(N);

    Base5num *= 2;

    cout << Base5num << endl;


    return 0;
}

