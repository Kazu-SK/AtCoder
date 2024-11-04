
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int H = 0, W = 0;


    cin >> H >> W;


    vector<vector<int>> A(H, vector<int>(W));
    vector<vector<int>> B(H, vector<int>(W));

    int range[4][2] = {{0,0},{0,1},{1,1},{1,0}};


    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++)
            cin >> A[h][w];
	}

    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++)
            cin >> B[h][w];
	}

    LL ans = 0;

    for (int h = 0; h < H - 1; h++) {
        for (int w = 0; w < W - 1; w++) {

			int diff = B[h][w] - A[h][w];
			ans += abs(diff);

            for (int d = 0; d < 4; d++) {
                int d_h = 0; 
                int d_w = 0; 

                d_h = range[d][0];
                d_w = range[d][1];

                A[h + d_h][w + d_w] += diff;
            }
        }
    }

    bool judge = true;

    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++){
            if (A[h][w] != B[h][w])
                judge = false;
        }
	}

    if (judge) {
        cout << "Yes" << endl;
        cout << ans << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}

