
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL Pow(LL x, LL y) { //ans = x^y  入力条件によってオーバフローする値にならないか確認する。

    LL ans = 1;

    for (int i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}

int main()
{
    LL A = 0, B = 0, C = 0;


    cin >> A >> B >> C;

    if (C % 2 == 0)C = 2;
    else C = 1;


    if (Pow(A, C) < Pow(B, C)) {
        cout << '<' << endl;
    }
    else {
        if (Pow(A, C) > Pow(B, C)) {
            cout << '>' << endl;
        }
        else {
            cout << '=' << endl;
        }
    }


    return 0;
}

