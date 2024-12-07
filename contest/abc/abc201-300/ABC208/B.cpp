
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


LL CalcFactorial(int n) {

    LL ans = 1;

    for (int i = 1; i <= n; i++) {
        ans *= i;
    }

    return ans;
}

int main()
{
    int P = 0;
    int nk[10] = { 0 };


    cin >> P;

    for (int n = 1; n <= 10; n++) {
        nk[n - 1] = CalcFactorial(n);
    }


    int rest_money = P;
    int ans = 0;

    for (int n = 9; n >= 0; n--) {

        int koka = rest_money / nk[n];

        ans += koka;
        rest_money -= nk[n] * koka;

        if (rest_money == 0) {
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

