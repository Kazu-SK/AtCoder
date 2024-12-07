#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL Pow(LL x, LL y) { //ans = x^y  入力条件によってオーバフローする値にならないか確認する。

    LL ans = 1;

    for (LL i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}

int main()
{

    LL N = 0;
    int M = 0;
    LL ans = 0;
    LL move[9][2] = { {0,0}, { 2,1 },{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1} };

    map<pair<LL, LL>, bool> Map;


    cin >> N >> M;

    ans = Pow(N, 2);

    vector<LL> a(M);
    vector<LL> b(M);

    for (int i = 0; i < M; i++)
        cin >> a[i] >> b[i];

    for (int i = 0; i < M; i++) {

        pair<LL, LL> p;

        LL init_a = a[i];
        LL init_b = b[i];

        for (int m = 0; m < 9; m++) {
            a[i] = init_a;
            b[i] = init_b;

            a[i] += move[m][0];
            b[i] += move[m][1];

            if (a[i] < 1 || a[i] > N)
                continue;

            if (b[i] < 1 || b[i] > N)
                continue;

            p = make_pair(a[i], b[i]);

            if (Map[p] != true) {
                Map[p] = true;
                ans--;
            }

        }
    }

    cout << ans << endl;

    return 0;
}

