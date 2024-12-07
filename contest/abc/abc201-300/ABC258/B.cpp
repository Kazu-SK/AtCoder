
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
    int N = 0;


    cin >> N;


    vector<vector<char>> A(N, vector<char>(N));

    int x[8] = {1,  1,  0,  -1, -1, -1, 0,  1};
    int y[8] = {0,  1,  1,  1,   0, -1, -1, -1};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    LL ans = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            LL calc = 0;
            LL pos_x = j;
            LL pos_y = i;

            for (int d = 0; d < 8; d++) {
                calc = 0;
                for (int g = 0; g < N; g++) {

                    //cout << pos_x << " " << pos_y << endl;
                    calc += (LL)(A[pos_x][pos_y] - '0') * Pow(10, g);
                    
                    pos_x += x[d];
                    pos_y += y[d];

                    if (pos_x < 0)pos_x = N - 1;
                    if (pos_y < 0)pos_y = N - 1;
                    if (pos_x >= N)pos_x = 0;
                    if (pos_y >= N)pos_y = 0;

                }

                ans = max(ans, calc);
            }
        }
    }

    cout << ans << endl;


    return 0;
}

