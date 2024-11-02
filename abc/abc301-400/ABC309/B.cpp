
#include <iostream>
#include <vector>


using namespace std;


using LL = long long;

int main()
{
    int N = 0;


    cin >> N;


    vector<vector<char>> A(N + 1, vector<char>(N + 1, 0));


    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> A[i][j];
        }
    }


    vector<char> retu;

    for (int j = 1; j <= N; j++) {
        retu.push_back(A[1][j]);
    }

    for (int i = 2; i <= N; i++) {
        retu.push_back(A[i][N]);
    }

    for (int j = N-1; j >= 1; j--) {
        retu.push_back(A[N][j]);
    }

    for (int i = N-1; i > 1; i--) {
        retu.push_back(A[i][1]);
    }


    int tmp = 0;

    tmp = retu[retu.size()-1];
    retu.pop_back();
    retu.insert(retu.begin(), tmp);

    int retu_itr = 0;


    for (int j = 1; j <= N; j++) {
        A[1][j] = retu[retu_itr];
        retu_itr++;
    }

    for (int i = 2; i <= N; i++) {
        A[i][N] = retu[retu_itr];
        retu_itr++;
    }

    for (int j = N-1; j >= 1; j--) {
        A[N][j] = retu[retu_itr];
        retu_itr++;
    }

    for (int i = N-1; i > 1; i--) {
        A[i][1] = retu[retu_itr];
        retu_itr++;
    }

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cout << A[i][j];
        }
        cout << endl;
    }


    return 0;
}

