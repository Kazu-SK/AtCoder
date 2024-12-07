
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
    bool judge = true;

    cin >> S >> T;


    if (S > T) {
        judge = false;
    }
    else {
        for (int i = 0; i < S.size(); i++) {
            if (S[i] != T[i]) {
                judge = false;
            }
        }
    }


    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

