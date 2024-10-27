
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    double a = 0, b = 0, d = 0;
    const double PI = 3.141592653589;

    double length = 0.0;
    double x = 0.0;
    double y = 0.0;
    double init_theta;

    cin >> a >> b >> d;


    init_theta = atan2(b, a);
    length = sqrt(a * a + b * b);


    x = length * cos(d * PI / 180.0 + init_theta);
    y = length * sin(d * PI / 180.0 + init_theta);


    printf("%.10f %.10f\n", x, y);

    return 0;
}

