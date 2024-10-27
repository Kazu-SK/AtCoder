
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

    double x[2] = { 0.0 };
    double y[2] = { 0.0 };
    double distance01;
    double LIMIT_D = sqrt(50);
    double ANS_D = sqrt(5);


    cin >> x[0] >> y[0] >> x[1] >> y[1];


    distance01 = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));

    bool judge = false;

    if (distance01 < LIMIT_D) {

        double min_x = min(x[0], x[1]) - 5.0;
        double max_x = max(x[0], x[1]) + 5.0;
        double min_y = min(y[0], y[1]) - 5.0;
        double max_y = max(y[0], y[1]) + 5.0;

        double calc_distance0 = 0.0;
        double calc_distance1 = 0.0;

        for (double x_i = min_x; x_i <= max_x; x_i += 1) {
            for (double y_i = min_y; y_i <= max_y; y_i += 1) {

                calc_distance0 = sqrt(pow(x_i - x[0], 2) + pow(y_i - y[0], 2));
                calc_distance1 = sqrt(pow(x_i - x[1], 2) + pow(y_i - y[1], 2));

                if (calc_distance0 == ANS_D && calc_distance1 == ANS_D) {
                    judge = true;
                }

            }
        }

    }
    else {
    }

    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

