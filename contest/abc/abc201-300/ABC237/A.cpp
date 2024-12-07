
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
    LL N = 0;
    LL pJ = 0;
    LL lJ = 0;


    cin >> N;

    pJ = Pow(2, 31);
    lJ = pJ * -1;

    if (lJ <= N && N < pJ) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

