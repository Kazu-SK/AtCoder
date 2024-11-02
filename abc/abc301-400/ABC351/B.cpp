#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<vector<char>> A(N, vector<char>(N, 0));
    vector<vector<char>> B(N, vector<char>(N, 0));


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }


    bool loop_end = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] != B[i][j]) {
                cout << i + 1 << " " << j + 1 << endl;
                loop_end = true;
                break;
            }
        }

        if (loop_end)
            break;
    }


    return 0;

}

