
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    string S;
    string T;


    string s_plus[] = { "dreameraser","dreamerase", "dreamer","eraser" ,"dream", "erase"};


    cin >> S;

    int S_itr = 0;
    string S_sub;
    bool S_judge = false;
    bool answer = true;

    while (S_itr < S.size()){

        S_judge = false;
        S_sub.clear();
        for (int i = 0; i < 6; i++) {
            S_sub = S.substr(S_itr, s_plus[i].size());


            if (S_sub == s_plus[i]) {
                S_judge = true;
                break;
            }
        }

        if (S_judge == true) {
            T += S_sub;
            S_itr += S_sub.size();
        }
        else {
            answer = false;
            break;
        }
    }

    if (answer == true) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
