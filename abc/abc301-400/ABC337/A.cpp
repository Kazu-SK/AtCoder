
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int Takahashi_win = 0;
    int Aoki_win = 0;

    int N = 0;

    cin >> N;

    vector<int> X(N, 0);
    vector<int> Y(N, 0);

    int X_sum = 0;
    int Y_sum = 0;


    for (int i = 0; i < N; i++) {
        cin >> X[i];
        cin >> Y[i];
    }

    for (int i = 0; i < N; i++) {
        X_sum += X[i];
        Y_sum += Y[i];
    }

    if (X_sum > Y_sum)
        cout << "Takahashi" << endl;
    else if (X_sum < Y_sum)
        cout << "Aoki" << endl;
    else
        cout << "Draw" << endl;


    return 0;
}

