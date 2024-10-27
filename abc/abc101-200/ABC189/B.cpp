
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
    int X = 0.0;


    cin >> N >> X;

    vector<int> V(N, 0);
    vector<int> P(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> V[i] >> P[i];
    }

    int arc = 0;

    for (int i = 0; i < N; i++) {

        arc += V[i] * P[i];

        if (arc > X * 100) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}

