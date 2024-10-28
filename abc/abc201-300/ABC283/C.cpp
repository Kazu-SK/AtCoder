
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


    cin >> S;


    LL ans_count = 0;

    while (S.size() > 0) {

        if (S.size() > 2) {
            if (S[S.size() - 1] == '0' && S[S.size() - 2] == '0') {
                S.erase(S.size() - 1);
                S.erase(S.size() - 1);

                ans_count++;

                //cout << S << endl;
                continue;
            }
        }

        S.erase(S.size() - 1);
        ans_count++;

        //cout << S << endl;
    }

    cout << ans_count << endl;

    return 0;
}

