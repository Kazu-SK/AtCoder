
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


    bool loop_judge = true;

    string calc_S = S;
    vector<string> S_lib;


    for (int shift_count = 0; shift_count < S.size(); shift_count++) {

        calc_S = S;

        for (int s = 0; s < shift_count; s++) {
            calc_S.push_back(calc_S[0]);
            calc_S.erase(calc_S.begin());
        }

        S_lib.push_back(calc_S);
    }


    sort(S_lib.begin(), S_lib.end());


    cout << S_lib[0] << endl;
    cout << S_lib[S_lib.size() - 1] << endl;

    return 0;
}

