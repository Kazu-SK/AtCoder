
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int H = 0, W = 0;


    cin >> H >> W;

    vector<vector<char>> S(H, vector<char>(W));
    int answer = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            cin >> S[i][j];

            if (S[i][j] == '#')
                answer++;
        }
    }

    cout << answer << endl;

    return 0;
}

