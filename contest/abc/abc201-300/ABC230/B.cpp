
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
    string T = "oxxoxxoxxoxxoxx";
    string S;

    
    cin >> S;

    bool ans_judge = false;
    
    for (int t = 0; t < 3; t++) {

        bool judge = true;

        for (int s = 0; s < S.size(); s++) {
            if (T[t + s] != S[s]) {
                judge = false;
            }
        }

        if (judge) {
            ans_judge = true;
            break;
        }
    }


    if (ans_judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

