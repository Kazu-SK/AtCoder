#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
using LL = long long;

double Pow(double x, int y) { //ans = x^y

    double ans = 1;

    for (int i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}

int main()
{
    double T = 0;
    double L = 0, X = 0, Y = 0;
    double Q = 0;

    cin >> T;
    cin >> L >> X >> Y;
    cin >> Q;

    vector<double> E(Q, 0);

    for (int i = 0; i < Q; i++)
        cin >> E[i];


    Y *= -1.0;

    double PI = 3.14159265358979323846;

    for (int i = 0; i < Q; i++) {

        double deg = 360.0 * (E[i] / T);

        deg = deg * PI / 180.0;

        double kago_X = 0.0;
        double kago_Y = 0.0;
        double kago_Z = 0.0;
        kago_Z = L / 2.0 - (L / 2.0) * cos(deg);
        kago_Y = (L / 2.0) * sin(deg);

        double dist = 0;
        dist = sqrt(Pow(X - kago_X, 2) + Pow(Y - kago_Y, 2));

        double ans = 0;
        ans = atan2(kago_Z, dist);
        ans = ans * 180.0 / PI;

        printf("%.7f\n", ans);
    }

    return 0;
}

