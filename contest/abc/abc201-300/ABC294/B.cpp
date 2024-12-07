
#include <iostream>
#include <vector>

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

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {

            char out_c;

            if (A[i][j] != 0) {
                out_c = A[i][j] + '@';
            }
            else {
                out_c = '.';
            }

            cout << out_c;
        }
        cout << endl;
    }



    return 0;
}

