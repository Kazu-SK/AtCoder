
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    string S;
    string T;


    cin >> S;
    cin >> T;

    bool judge = false;

    for (int i = 0; i + T.size() - 1 < S.size(); i++) {
        string sub;

        sub = S.substr(i, T.size());

        if (sub == T) {
            judge = true;
        }
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

