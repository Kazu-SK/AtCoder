#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int H = 0, W = 0;


    cin >> H >> W;


    vector<vector<int>> A(H + 1, vector<int>(W + 1, 0));
    vector<vector<int>> H_sum(H + 1, vector<int>(W + 1, 0));
    vector<vector<int>> W_sum(H + 1, vector<int>(W + 1, 0));
    vector<vector<int>> ans(H + 1, vector<int>(W + 1, 0));


    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            cin >> A[h][w];
        }
    }

    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            W_sum[h][w] = W_sum[h][w - 1] + A[h][w];
        }
    }

    for (int w = 1; w <= W; w++) {
        for (int h = 1; h <= H; h++) {
            H_sum[h][w] = H_sum[h - 1][w] + A[h][w];
        }
    }

    for (int h = 1; h <= H; h++) {
        for (int w = 1; w <= W; w++) {
            ans[h][w] = H_sum[H][w] + W_sum[h][W] - A[h][w];
            cout << ans[h][w] << " ";
        }
        cout << endl;
    }


    return 0;
}

