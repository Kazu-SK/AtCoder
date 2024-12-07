
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

    vector<vector<char>> S(H, vector<char>(W));
    vector<string> S_W(W);

    vector<vector<char>> T(H, vector<char>(W));
    vector<string> T_W(W);

    map<string, bool> Map_b;
    map<string, int> Map_c;


    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            cin >> S[h][w];

            S_W[w].push_back(S[h][w]);
        }
    }

    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            cin >> T[h][w];

            T_W[w].push_back(T[h][w]);
        }
    }

    for (int w = 0; w < W; w++) {
        Map_b[T_W[w]] = true;
        Map_c[T_W[w]]++;
    }

    bool judge = true;

    for (int w = 0; w < W; w++) {
        if (Map_b[S_W[w]] == false) {
            judge = false;
            break;
        }
        else {
            if (Map_c[S_W[w]] > 0) {
                Map_c[S_W[w]]--;
            }
            else {
                judge = false;
                break;
            }
        }
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

