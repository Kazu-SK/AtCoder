
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


    cin >> H >> W;

    vector<vector<char>> G(H + 1, vector<char>(W + 1));
    map<pair<int, int>, bool> Map;


    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            pair<int, int> p;

            cin >> G[h][w];

            p.first = h;
            p.second = w;

            Map[p] = false;
        }
    }


    int ans_h = 0, ans_w = 0;
    int end_grid = false;
    int h = 1, w = 1;

    while (true) {

        pair<int, int> p;

        ans_h = h;
        ans_w = w;

        p.first = ans_h;
        p.second = ans_w;

        if (Map[p]) {
            end_grid = false;
            break;
        }
        else {
            Map[p] = true;
        }

        //cout << h << " " << w << endl;

        switch (G[h][w]) {
            case 'U':
                h -= 1;
                break;
            case 'D':
                h += 1;
                break;
            case 'L':
                w -= 1;
                break;
            case 'R':
                w += 1;
                break;
            default:
                break;
        }
        //cout << h << " " << w << endl << endl;

        if ((h < 1 || h > H) || (w < 1 || w > W)) {
            end_grid = true;
            break;
        }


    }

    if (end_grid) {
        cout << ans_h << " " << ans_w << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}

