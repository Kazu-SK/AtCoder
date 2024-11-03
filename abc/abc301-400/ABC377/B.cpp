#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    vector<vector<char>> masu(8, vector<char>(8));
    bool col[8] = { false };
    bool raw[8] = { false };


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> masu[i][j];

            if (masu[i][j] == '#') {
                raw[i] = true;
                col[j] = true;
            }
        }
    }

    int ans = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (raw[i] == false && col[j] == false) {
                // cout << i << " " << j << endl;
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

