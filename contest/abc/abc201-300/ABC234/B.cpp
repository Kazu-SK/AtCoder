
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
    int N = 0;


    cin >> N;

    vector<int> x(N);
    vector<int> y(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }


    double max_l = 0.0;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {

            double calc_l = 0.0;


            calc_l = sqrt(((double)x[i] - x[j]) * ((double)x[i] - x[j]) + ((double)y[i] - y[j]) * ((double)y[i] - y[j]));

            max_l = max(calc_l, max_l);
        }
    }


    printf("%.6f\n", max_l);

    return 0;
}

