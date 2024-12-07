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
    int N = 0, W = 0;


    cin >> N >> W;


    typedef struct {
        LL A;
        LL B;
    }Pizza;

    vector<Pizza> P(N);

    for (int i = 0; i < N; i++) {
        cin >> P[i].A >> P[i].B;
    }

    sort(P.rbegin(), P.rend(), [&](const auto& l, const auto& r) { return l.A < r.A; });


    LL rest_W = W;
    LL ans = 0;

    for (int i = 0; i < N; i++) {

        ans += P[i].A * min(P[i].B, rest_W);
        rest_W -= min(P[i].B, rest_W);
    }

    cout << ans << endl;

    return 0;
}

