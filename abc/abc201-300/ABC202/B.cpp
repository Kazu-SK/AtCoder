
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

    int l_itr = S.size() - 1;

    for (int i = 0; i < S.size() / 2; i++) {
        char tmp;

        tmp = S[i];
        S[i] = S[l_itr - i];
        S[l_itr - i] = tmp;
    }

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '6') {
            S[i] = '9';
        }
        else {
            if (S[i] == '9') {
                S[i] = '6';
            }
        }
    }

    cout << S << endl;

    return 0;
}

