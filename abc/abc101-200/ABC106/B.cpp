
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
    int ans = 0;


    cin >> N;

    for (int n = 1; n <= N; n++) {

        int count = 0;

        if (n % 2 == 0)
            continue;

        for (int div = 1; div <= N; div++) {
            if (n % div == 0) {
                count++;
            }
        }

        if (count == 8)
            ans++;
    }

    cout << ans << endl;

    return 0;
}

