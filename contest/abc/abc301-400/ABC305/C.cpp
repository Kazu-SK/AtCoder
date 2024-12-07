
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


    cin >> H >> W;

    vector<vector<char>> S(H + 1, vector<char>(W + 1));
    int min_h = 1e9;
    int min_w = 1e9;
    int max_h = 0;
    int max_w = 0;


    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> S[i][j];

            if (S[i][j] == '#') {
                min_h = min(min_h, i);
                min_w = min(min_w, j);
                max_h = max(max_h, i);
                max_w = max(max_w, j);
            }
        }
    }

    /*
    cout << min_h << endl;
    cout << min_w << endl;
    cout << max_h << endl;
    cout << max_w << endl;
    */

    for (int i = min_h; i <= max_h; i++) {
        for (int j = min_w; j <= max_w; j++) {

            //cout << i << " " << j << " " << S[i][j] << endl;

            if (S[i][j] == '.') {
                cout << i << " " << j << endl;
            }
        }
    }



    return 0;
}

