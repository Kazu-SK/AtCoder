#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    double ans = 0;


    cin >> N;


    vector<double> X(N);
    vector<double> Y(N);

    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    ans += sqrt((X[0] * X[0]) + (Y[0] * Y[0]));

    for (int i = 1; i < N; i++) {
        ans += sqrt((X[i] - X[i - 1]) * (X[i] - X[i - 1]) + (Y[i] - Y[i - 1]) * (Y[i] - Y[i - 1]));
    }

    ans += sqrt((X[N - 1]) * (X[N - 1]) + (Y[N - 1]) * (Y[N - 1]));

    printf("%.6f\n", ans);

    return 0;
}

