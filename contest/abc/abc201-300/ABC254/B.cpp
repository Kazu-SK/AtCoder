
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


    vector<vector<int>> A(N);


    A[0].push_back(1);


    int J = 1;

    for (int i = 1; i < N; i++) {
        for (int j = 0; j <= J ; j++) {
            
            if (i == j || j == 0) {
                A[i].push_back(1);
            }
            else {
                A[i].push_back(A[i - 1][j - 1] + A[i - 1][j]);
            }
        }
        J++;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < A[i].size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

