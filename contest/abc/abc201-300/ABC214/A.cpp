
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

    int ans = 0;

    if (N <= 125) {
        ans = 4;
    }
    else {
        if (N >= 126 && N <= 211) {
            ans = 6;
        }
        else {
            ans = 8;
        }
    }

    cout << ans << endl;

    return 0;
}

