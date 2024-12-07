
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


    vector<vector<char>> S(H, vector<char>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];
        }
    }


    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W - 1; j++) {

            if (S[i][j] == 'T' && S[i][j + 1] == 'T') {
                S[i][j] = 'P';
                S[i][j + 1] = 'C';
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cout << S[i][j];
        }
        cout << endl;
    }


    return 0;
}

