
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
    string S[3];
    string T;
    string ans;


    for (int i = 0; i < 3; i++)
        cin >> S[i];

    cin >> T;


    for (int i = 0; i < T.size(); i++) {
        int t_num = 0;

        t_num = T[i] - '0';
        t_num -= 1;

        ans += S[t_num];

    }

    cout << ans << endl;

    return 0;
}

