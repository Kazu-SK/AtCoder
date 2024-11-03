
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


vector<vector<char>> S(10, vector<char>(10, 0));
map<pair<int, int>, bool> comp;
LL ans;
int K;
int H, W;


enum Direction {
    HI = 0,
    WI
};


void CountRoot(int h, int w, int c) {

    int d[4][2] = { {0, 1},{1, 0},{0, -1},{-1, 0} };

    int init_h = h;
    int init_w = w;

    pair<int, int> p;

    if (c == K) {
        ans++;
        return;
    }

    p = make_pair(init_h, init_w);

	comp[p] = true;

    for (int i = 0; i < 4; i++) {

        if ((init_h + d[i][HI] >= 0 && init_h + d[i][HI] < H) && (init_w + d[i][WI] >= 0 && init_w + d[i][WI] < W)) {
            h = init_h + d[i][HI];
            w = init_w + d[i][WI];

            p = make_pair(h, w);

            if (S[h][w] != '#' && comp[p] == false) {
                CountRoot(h, w, c + 1);
            }
            else {
            }
        }
    }

    p = make_pair(init_h, init_w);

    comp[p] = false;
}


int main()
{

    cin >> H >> W >> K;


    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                CountRoot(i, j, 0);
            }
        }
    }

    cout << ans << endl;

    return 0;
}

