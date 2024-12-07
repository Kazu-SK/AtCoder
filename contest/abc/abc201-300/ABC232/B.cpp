
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

    

    int S0_pos = S[0] - 'a';
    int T0_pos = T[0] - 'a';
    int st_diff = 0;


    if (S0_pos <= T0_pos) {
        st_diff = T0_pos - S0_pos;
    }
    else {
        st_diff = 25 - S0_pos + T0_pos + 1;
    }

    //cout << st_diff << endl;

    bool judge = true;
    for (int i = 0; i < S.size(); i++) {
        if ((((S[i] - 'a') + st_diff) % 26) != (T[i] - 'a')) {
            judge = false;
        }

        //cout << ((S[i] - 'a') + st_diff) % 26 << endl;
        //cout << (T[i] - 'a') << endl;
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

