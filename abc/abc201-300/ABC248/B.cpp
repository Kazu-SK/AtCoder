
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
    LL A = 0, B = 0, K = 0;


    cin >> A >> B >> K;

    int ans = 0;

    while (A < B) {

        A *= K;
        ans++;
    }

    cout << ans << endl;

    return 0;
}

