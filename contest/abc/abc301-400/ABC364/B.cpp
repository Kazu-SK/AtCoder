#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int H = 0, W = 0;
    int Si = 0;
    int Sj = 0;

    cin >> H >> W;

    cin >> Si >> Sj;


    vector<vector<char>> C(H + 2, vector<char>(W + 2, '#'));
    string X;


    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> C[i][j];
        }
    }

    cin >> X;


    for (int i = 0; i < X.size(); i++) {

        if (X[i] == 'L' && C[Si][Sj - 1] != '#') {
            Sj -= 1;
            continue;
        }

        if (X[i] == 'R' && C[Si][Sj + 1] != '#') {
            Sj += 1;
            continue;
        }

        if (X[i] == 'U' && C[Si - 1][Sj] != '#') {
            Si -= 1;
            continue;
        }

        if (X[i] == 'D' && C[Si + 1][Sj] != '#') {
            Si += 1;
        }
    }

    cout << Si << " " << Sj << endl;


    return 0;
}

