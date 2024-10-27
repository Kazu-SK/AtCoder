
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

    cin >> N;


    vector<double> A(N);
    vector<double> B(N);

    for(int i = 0 ; i < N ; i++)
		cin >> A[i] >> B[i];


    double sum = 0.0;
    double ans = 0.0;

    for (int i = 0; i < N; i++) {
        sum += A[i] / B[i];
    }

    sum /= 2.0;
    int i = 0;

    while (sum > 0) {

        if (A[i] / B[i] <= sum) {
            ans += B[i] * (A[i] / B[i]);
            sum -= A[i] / B[i];
        }
        else {
            ans += B[i] * sum;
            sum = 0;
        }

        i++;
    }

    printf("%.5f\n", ans);


    return 0;
}

