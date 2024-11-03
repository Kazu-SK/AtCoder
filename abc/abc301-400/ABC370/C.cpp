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

    string S, T;
    vector<string> X;
    vector<int> change_itr;


    cin >> S >> T;

    int itr = 0;
    int ans = 0;

    for (int itr = 0; itr < S.size(); itr++) {

        if (S[itr] != T[itr]) {

            int s_num = S[itr] - '0';
            int t_num = T[itr] - '0';

            if (s_num > t_num) {
                S[itr] = T[itr];
                ans++;
                X.push_back(S);
            }
            else {
                change_itr.push_back(itr);
            }
        }
    }

    sort(change_itr.rbegin(), change_itr.rend());

    for (int itr = 0; itr < change_itr.size(); itr++) {

        S[change_itr[itr]] = T[change_itr[itr]];
        ans++;
        X.push_back(S);
    }

    //sort(X.begin(), X.end());


    cout << X.size() << endl;
    for (int i = 0; i < X.size(); i++) {
        cout << X[i] << endl;
    }

    return 0;
}

