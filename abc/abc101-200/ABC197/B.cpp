
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
    int H = 0, W = 0;
    int init_H = 0, init_W = 0;


    cin >> H >> W >> init_H >> init_W;

    vector<vector<char>> S(H + 2, vector<char>(W + 2, '-'));

    for (int i = 1; i <=H; i++)
        for (int j = 1; j <= W; j++)
            cin >> S[i][j];


    int ans = 1;
    bool loop_judge = true;

    int dx[4] = { 1,0,-1,0 };
    int dy[4] = { 0,1,0,-1 };

    vector<int> h(4, init_H);
    vector<int> w(4, init_W);

    while (loop_judge) {


        loop_judge = false;

        for (int i = 0; i < 4; i++) {

            if (S[h[i] + dx[i]][w[i] + dy[i]] != '#' && S[h[i] + dx[i]][w[i] + dy[i]] != '-') {
                h[i] += dx[i];
                w[i] += dy[i];
                ans++;
                loop_judge = true;
            }
        }

    }

    cout << ans << endl;

    return 0;
}

