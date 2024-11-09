#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N = 0;
    int Q = 0;


    cin >> N;


    const int WIN = 1;
    const int LOSE = 0;
    vector<int> A(N + 1, 0);
    vector<int> S_1(N + 1, 0);
    vector<int> S_0(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= N; i++) {

        if (A[i] == WIN) {
            S_1[i] = S_1[i - 1] + 1;
            S_0[i] = S_0[i - 1];
        }
        else {
            S_0[i] = S_0[i - 1] + 1;
            S_1[i] = S_1[i - 1];
        }
    }


    cin >> Q;

    vector<int> L(Q + 1, 0);
    vector<int> R(Q + 1, 0);

    for (int i = 1; i <= Q; i++) {
        cin >> L[i] >> R[i];
    }

    for (int i = 1; i <= Q; i++) {

        int win_num = S_1[R[i]] - S_1[L[i] - 1];
        int lose_num = S_0[R[i]] - S_0[L[i] - 1];

        if (win_num > lose_num)
            cout << "win" << endl;
        else if (win_num == lose_num)
            cout << "draw" << endl;
        else
            cout << "lose" << endl;
    }




    return 0;
}

