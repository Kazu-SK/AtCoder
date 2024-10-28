
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


map<LL, LL> Map;

LL DivideAndDivide(LL n) {

    LL u_x = 0;
    LL d_x = 0;
    LL calc = 0;


    if (Map[n] == 0) {

        if (n < 2) {
            Map[n] = calc;
            return calc;
        }

        d_x = n / 2;

        if (n % 2 == 0)
            u_x = d_x;
        else
            u_x = d_x + 1;

        calc = n + DivideAndDivide(d_x) + DivideAndDivide(u_x);

        Map[n] = calc;

        return calc;
    }
    else {
        return Map[n];
    }

}

int main()
{
    LL N = 0;
    LL ans = 0;


    cin >> N;

    
    ans = DivideAndDivide(N);

    cout << ans << endl;

    return 0;
}

