
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


    cin >> S;
    cin >> T;

    int ans = T.size();

    for (int i = 0; i < S.size(); i++) {

        if (S[i] != T[i]) {
            ans = i + 1;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

