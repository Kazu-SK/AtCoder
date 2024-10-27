
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, K = 0;


    cin >> N >> K;


    vector<int> A(K, 0);
    for (int i = 0; i < K; i++) {
        cin >> A[i];
    }

    vector<double> X(N + 1, 0.0);
    vector<double> Y(N + 1, 0.0);

    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    double max_distance = 0;

   for (int j = 1; j <= N; j++) {
        double min_distance = 1e8;
        double calc_distance = 0;

        for (int i = 0; i < K; i++) {

            /*
            if (A[i] == j) {
                continue;
            }
            */

            calc_distance = sqrt((X[A[i]] - X[j]) * (X[A[i]] - X[j]) + (Y[A[i]] - Y[j]) * (Y[A[i]] - Y[j]));
            min_distance = min(min_distance, calc_distance);
        }

        max_distance = max(max_distance, min_distance);
    }


    printf("%.7f\n", max_distance);

    return 0;
}

