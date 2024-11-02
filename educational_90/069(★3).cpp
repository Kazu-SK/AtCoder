
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


LL Power(LL x, LL n, LL m) { //x^n mod m

    if (n == 0)
        return 1;

    if (n % 2 == 1) {
        return x * Power(x, n - 1, m) % m;
    }
    else {
        LL c = Power(x, n / 2, m) % m;
        return (c * c) % m;
    }
}

int main()
{
    LL N = 0;
    LL K = 0;
    const LL DIV = 1e9 + 7;
    LL ans = 1;


    cin >> N >> K;


    if (K == 1) {
        if (N == 1) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    else {
        if (N == 1) {
            cout << K % DIV << endl;
        }
        else {
            if (N == 2) {
                cout << K * (K - 1) % DIV << endl;
            }
            else {
                
                ans = Power(K -2 ,N - 2, DIV);

				ans *= K;
				ans %= DIV;

				ans *= K - 1;
				ans %= DIV;

                cout << ans << endl;
            }
        }
    }

    
    return 0;
}

