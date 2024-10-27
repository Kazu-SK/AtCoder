
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
    int ABC[3];


    for (int i = 0; i < 3; i++) {
        cin >> ABC[i];
    }

    int ans = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            ans = max(ans, ABC[i] + ABC[j]);
        }
    }

    cout << ans << endl;

    return 0;
}

