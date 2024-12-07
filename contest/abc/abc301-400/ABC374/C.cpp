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


    vector<LL> K(N);


    for (int i = 0; i < N; i++) {
        cin >> K[i];
    }


    LL ans = 1e18;

    for (int i = 0; i < (1 << N); i++) {

        LL sum_A = 0;
        LL sum_B = 0;

        for (int j = 0; j < N; j++) {

            if (i & (1 << j)) {
                sum_A += K[j];
            }
            else {
                sum_B += K[j];
            }
        }

        LL sum_big = max(sum_A, sum_B);

        ans = min(ans, sum_big);
    }

    cout << ans << endl;


    return 0;
}

