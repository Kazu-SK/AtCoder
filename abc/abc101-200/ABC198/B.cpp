
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


bool ReverseJudge(string s) {

    bool judge = true;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] != s[s.size() - 1 - i]) {
            judge = false;
        }
    }

    return judge;
}



int main()
{
    string N;


    cin >> N;


    bool ans_judge = false;

    for (int i = 0; i < N.size() + 1; i++) {

        string add_zero;
        string calc_N;
        
        for (int j = 0; j < i; j++) {
            add_zero.push_back('0');
        }

        calc_N = add_zero + N;

        //cout << calc_N << endl;

        if (ReverseJudge(calc_N) == true) {
            ans_judge = true;
            break;
        }
    }

    if (ans_judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

