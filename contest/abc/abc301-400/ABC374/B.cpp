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
    string S;
    string T;


    cin >> S >> T;

    int ans = 0;

    if (S == T) {
        ans = 0;
    }
    else {

        int limit_s = min(S.size(), T.size());

        ans = limit_s + 1;

        for (int i = 0; i < limit_s; i++) {

            if (S[i] != T[i]) {
                ans = i + 1;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

