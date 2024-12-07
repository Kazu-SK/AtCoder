
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
    double A, B;


    cin >> A >> B;


    double theta = 0.0;
    double X = 0.0;
    double Y = 0.0;


    theta = atan2(B, A);

    X = cos(theta);
    Y = sin(theta);


    printf("%.8f %.8f\n", X, Y);

    return 0;
}

