
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    string S;
    string T;
    string atcoder = "atcoder";
    LL S_count[26] = { 0 };
    LL T_count[26] = { 0 };
    LL S_at_num = 0;
    LL T_at_num = 0;

    int N = 0;

    cin >> S >> T;

    N = (int)S.size();


    for (int i = 0; i < N; i++) {
        if (S[i] != '@')
            S_count[S[i] - 'a']++;
        else
            S_at_num++;

        if (T[i] != '@')
            T_count[T[i] - 'a']++;
        else
            T_at_num++;
    }

    for (int i = 0; i < atcoder.size(); i++) {

        int itr = atcoder[i] - 'a';
        LL shotage = 0;

        if (S_count[itr] < T_count[itr]) {
            shotage = T_count[itr] - S_count[itr];

            if (S_at_num - shotage >= 0) {
                S_count[itr] += shotage;
            }

            S_at_num -= shotage;
        }
        else {
            if (S_count[itr] > T_count[itr]) {
                shotage = S_count[itr] - T_count[itr];

                if (T_at_num - shotage >= 0) {
                    T_count[itr] += shotage;
                }

                T_at_num -= shotage;

            }
        }
    }

    LL diff = 0;

    for (int i = 0; i < 26; i++) {
        //cout << "S_count[" << char('a' + i) << "]=" << S_count[i] << '\t';
        //cout << "T_count[" << char('a' + i) << "]=" << T_count[i] << endl;
        diff += abs(S_count[i] - T_count[i]);
    }

    /*
    cout << "S_at_num = " << S_at_num << endl;
    cout << "T_at_num = " << T_at_num << endl;
    cout << "diff = " << diff << endl;
    */

    if (diff == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

