
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int H = 0, W = 0;


    cin >> H >> W;

    vector<vector<char>> A(H, vector<char>(W));
    vector<vector<char>> B(H, vector<char>(W));
    vector<vector<char>> trans_A(H, vector<char>(W));


    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            cin >> A[h][w];
        }
    }

    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            cin >> B[h][w];
        }
    }

    for (int s = 0; s < H; s++) { // 移動させる行の回数
        for (int t = 0; t < W; t++) { // 移動させる列の回数

            bool judge;

            judge = true;

            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {

                    //cout << "h = " << (i - s + H ) % H <<endl;
                    //cout << "w = " << (j - t + W ) % W <<endl;
                    int trans_A_h = (i - s + H) % H;
                    int trans_A_w = (j - t + W) % W;

                    trans_A[trans_A_h][trans_A_w] = A[i][j]; //行をs回、列をt回移動させたとき、A[][]はtrans_A[][]に行く。

                    if (trans_A[trans_A_h][trans_A_w] != B[trans_A_h][trans_A_w]) 
                        judge = false;

                }
            }

            if (judge) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;



    return 0;
}

