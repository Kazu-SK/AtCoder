
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
    int N = 0, K = 0, A = 0;


    cin >> N >> K >> A;


    int ans = 0;


    ans = K % N;

    if (ans == 0) {
        ans = N;
    }

    ans = ans + (A - 1);

    if (ans > N) {
        ans %= N;
    }

    cout << ans << endl;

    return 0;
}

