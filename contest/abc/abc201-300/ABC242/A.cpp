
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
    int A ,B ,C ,X;


    cin >> A >> B >> C >> X;


    double ans = 0.0;


    if (X <= A) {
        ans = 1.0;
    }
    else {
        if (X > B) {
            ans = 0.0;
        }
        else {
            ans = (double)C / (B - A);
        }
    }


    printf("%.6f\n", ans);

    return 0;
}

