
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
    double H = 0.0;


    cin >> H;


    double ans = 0.0;

    ans = sqrt(H * (12800000 + H));

    printf("%.6f\n", ans);

    return 0;
}

