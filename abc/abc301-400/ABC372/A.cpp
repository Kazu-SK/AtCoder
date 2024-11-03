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
    string ans_S;


    cin >> S;


    for (int i = 0; i < S.size(); i++) {
        if (S[i] != '.') {
            ans_S.push_back(S[i]);
        }
    }

    cout << ans_S << endl;

    return 0;
}

