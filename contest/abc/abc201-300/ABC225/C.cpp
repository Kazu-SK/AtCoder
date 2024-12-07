
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
    int N = 0, M = 0;



    cin >> N >> M;

    vector<vector<LL>> B(N + 1, vector<LL>(M + 1, 0));


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> B[i][j];
        }
    }


    //(i - 1) * 7 + j = B[1][1]
    LL init_i = -1;
    LL init_j = -1;

    for (int j = 1; j <= 7; j++) {

        int amari = 0;

        amari = (B[1][1] - j) % 7;

        if (amari == 0) {
            init_i = (B[1][1] - j) / 7 + 1;
            init_j = j;
            break;
        }
    }

    if (init_i == -1) {

        cout << "No" << endl;
        return 0;
    }

    //cout << init_i << " " << init_j << endl;
    bool judge = true;
    int B_i = 1;
    int B_j = 1;

    for (LL i = init_i; i < init_i + N; i++) {
        for (LL j = init_j; j < init_j + M; j++) {

            LL num = 0;

            num = (i - 1) * 7 + j;

            if (init_j + B_j - 1 > 7) {
                judge = false;
            }

            //cout << init_j + B_j - 1 << " ";

            if (B[B_i][B_j] != num) {
                judge = false;
            }

            B_j++;
        }
        B_j = 1;
        B_i++;

        //cout << endl;
    }


    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

