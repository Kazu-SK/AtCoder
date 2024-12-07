
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

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }

    bool judge = true;

    for (int i2= 1; i2 < H; i2++) {
        for (int i1 = 0; i1 < i2; i1++) {

            for (int j2 = 1; j2 < W; j2++) {
                for (int j1 = 0; j1 < j2; j1++) {

                    //cout << i1 << " " << i2 << " " << j1 << " " << j2 << endl;
                    if (!(A[i1][j1] + A[i2][j2] <= A[i2][j1] + A[i1][j2])) {
                        judge = false;
                    }
                }
            }
        }
    }


    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

