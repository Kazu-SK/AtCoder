
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
    int H = 0;
    int W = 0;
    int R = 0;
    int C = 0;

    int diff[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };

    cin >> H >> W;
    cin >> R >> C;

    int ans = 0;

    for (int i = 0; i < 4; i++) {
        
        int R_d = R + diff[i][0];
        int C_d = C + diff[i][1];

        if ((R_d >= 1 && R_d <= H) && (C_d >= 1 && C_d <= W))
            ans++;
    }

    cout << ans << endl;

    return 0;
}

