#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int N = 0, M = 0;


    cin >> N >> M;


    vector<int> A(M + 1, 0);
    //vector<int> tmp(N + 1, 0);
    vector<vector<int>> X(N + 1, vector<int>(M + 1, 0));
    //vector<int> sum(M + 1, 0);


    for (int i = 1; i <= M; i++)
        cin >> A[i];


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> X[i][j];
        }
    }


    bool eiyo = true;

    for (int j = 1; j <= M; j++) {
        int sum = 0;

        for (int i = 1; i <= N; i++) {

            sum += X[i][j];
        }

        if (sum < A[j]) {
            eiyo = false;
            break;
        }

        // sum = 0;
    }

    if (eiyo == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

