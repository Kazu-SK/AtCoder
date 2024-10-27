
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
    set<int> s_set;


    cin >> S;

    bool ss_judge = false;
    bool bs_judge = false;
    bool diff_judge = false;

    for (int i = 0; i < S.size(); i++) {
        s_set.insert(S[i]);

        char ss = S[i] - 'a';
        char bs = S[i] - 'A';

        if (ss >= 0 && ss <= 25)ss_judge = true;
        if (bs >= 0 && bs <= 25)bs_judge = true;
    }

    if (s_set.size() == S.size())
        diff_judge = true;


    if (ss_judge && bs_judge && diff_judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

