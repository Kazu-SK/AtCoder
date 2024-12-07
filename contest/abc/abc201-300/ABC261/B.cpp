
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

    vector<string> A(N);


    for (int i = 0; i < N; i++) {
            cin >> A[i];
    }

    bool judge = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (A[i][j] == 'L' && A[j][i] != 'W') {
                judge = false;
            }

            if (A[i][j] == 'W' && A[j][i] != 'L') {
                judge = false;
            }

            if (A[i][j] == 'D' && A[j][i] != 'D') {
                judge = false;
            }
        }
    }

    if (judge) {
        cout << "correct" << endl;
    }
    else {
        cout << "incorrect" << endl;
    }

    return 0;
}

