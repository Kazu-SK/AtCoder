
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
    int K = 0;


    cin >> N >> K;


    int ans = 0;

    for (int n = 1; n <= N; n++) {
        for (int k = 1; k <= K; k++) {
            ans += 100 * n + k;
        }
    }

    cout << ans << endl;

    return 0;
}

