#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
    int N = 0;
    int D = 0;
    llong P = 0;


    cin >> N >> D >> P;


    vector<llong> F(N + 1, 0);

    for (int i = 1; i <= N; i++)
        cin >> F[i];

    sort(F.rbegin(), F.rend());

    llong sum = 0;
    llong ans = 0;
    int i_count = 0;

    for (int i = 0; i < N; i++) {
        sum += F[i];

        i_count++;

        if (i_count == D) {
            if (P < sum) 
                sum = P;

            ans += sum;
            i_count = 0;
            sum = 0;
        }
        else if (i == N - 1) {
            if (P < sum) 
                sum = P;

            ans += sum;
        }
        else {
        }

    }

    cout << ans << endl;

    return 0;
}

