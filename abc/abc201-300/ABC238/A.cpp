
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = unsigned long long;

LL Pow(int x, int y) { //ans = x^y  入力条件によってオーバフローする値にならないか確認する。

    LL ans = 1;

    for (int i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}



int main()
{
    int n = 0;


    cin >> n;


    if (n >= 2 && n <= 4) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }

    return 0;

}

