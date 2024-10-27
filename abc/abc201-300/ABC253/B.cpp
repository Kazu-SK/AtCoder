
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
    vector<int> koma_i;
    vector<int> koma_j;


    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> S[i][j];

            if (S[i][j] == 'o') {
                koma_i.push_back(i);
                koma_j.push_back(j);
            }
        }
    }


    int ans = 0;

    ans += abs(koma_i[0] - koma_i[1]);
    ans += abs(koma_j[0] - koma_j[1]);


    cout << ans << endl;

    return 0;
}

