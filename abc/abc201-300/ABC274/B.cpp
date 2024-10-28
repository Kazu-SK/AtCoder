
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int H = 0, W = 0;


    cin >> H >> W;

    vector<vector<char>> C(H, vector<char>(W, '.'));
    vector<int> ans(W, 0);

    /***********************
    
    縦 Hマス = 3,
    横 Wマス = 4

    @@@@ 
    @@@@
    @@@@
    
    ************************/

    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> C[i][j];
        }
    }

    /* 各列の#の数を数える。*/
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            if (C[j][i] == '#') {
                ans[i]++;
            }
        }
    }


    for (int i = 0; i < W; i++)
        cout << ans[i] << " ";

    return 0;
}

