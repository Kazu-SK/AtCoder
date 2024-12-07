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
    LL M = 0;
    LL init_M = 0;


    cin >> M;


    init_M = M;

    LL calc_M = 0;
    int A = 0;
    vector<int> ans_A;


    while (M > 0) {

        calc_M = M / 3;

        if (calc_M > 0 && A < 10) {
            A++;
            M = M / 3;
        }
        else {
            ans_A.push_back(A);
            M = init_M - Pow(3, A);
            init_M = M;
            A = 0;
        }
    }

    cout << ans_A.size() << endl;

    for (int i = 0; i < ans_A.size(); i++) {
        cout << ans_A[i] << " ";
    }

    return 0;
}

