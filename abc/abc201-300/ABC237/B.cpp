
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


    vector<vector<int>> A(H, vector<int>(W, 0));


    for (int i = 0; i < H; i++)
        for (int j = 0; j < W; j++)
            cin >> A[i][j];

    for (int i = 0; i < W; i++) {
        for (int j = 0; j < H; j++) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

