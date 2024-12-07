
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
    LL N;

    cin >> N;


    int ans = 0;

    while (true) {

        LL calc_num = Pow(2, ans);

        if (calc_num < N) {
            ans++;
            continue;
        }
        else {
            if (calc_num > N) {
                ans--;
            }

            break;
        }
    }

    cout << ans << endl;

    return 0;
}

