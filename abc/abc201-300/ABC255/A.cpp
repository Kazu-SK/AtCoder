
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using LL = long long;

int main()
{
    int R = 0, C = 0;


    cin >> R >> C;


    vector<vector<int>> A(2, vector<int>(2, 0));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    cout << A[R - 1][C - 1] << endl;

    return 0;
}

