
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL f(LL x) {
    return x * x + 2 * x + 3;
}

int main()
{
    LL t = 0;

    cin >> t;


    LL ft = 0;
    LL fft = 0;
    LL ft_t = 0;
    LL ans = 0;


    ft = f(t);
    fft = f(ft);
    ft_t = f(ft + t);

    ans = f(ft_t + fft);

    cout << ans << endl;

    return 0;
}

