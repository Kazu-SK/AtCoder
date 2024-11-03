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
    int N = 0;


    cin >> N;


    vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> A[i][j];
        }
    }

    int g_num = 1;
    for (int g = 1; g <= N; g++) {

        //cout << g_num << " " << g << endl;

        if (g_num >= g) {
            g_num = A[g_num][g];
        }
        else {
            g_num = A[g][g_num];
        }
    }

    cout << g_num << endl;

    return 0;
}

