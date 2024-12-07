#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<vector<int>> A(N + 1, vector<int>(N + 1, 0));


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {

            if (A[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }


    return 0;
}

