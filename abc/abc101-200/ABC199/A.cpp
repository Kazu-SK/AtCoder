
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL Pow(int x, int y) { //ans = x^y  入力条件によってオーバフローする値にならないか確認する。

    LL ans = 1;

    for (int i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}

int main()
{

    int A = 0, B = 0, C = 0;
    LL A_2 = 0, B_2 = 0, C_2 = 0;


    cin >> A >> B >> C;


    A_2 = Pow(A, 2);
    B_2 = Pow(B, 2);
    C_2 = Pow(C, 2);

    if (A_2 + B_2 < C_2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

