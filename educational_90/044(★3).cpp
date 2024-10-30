#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


enum T_NUM {
    TRADE = 1,
    SHIFT,
    OUTPUT
};

int main()
{
    int N = 0;
    int Q = 0;


    cin >> N >> Q;

    vector<int> A(N);
    vector<int> T(Q);
    vector<int> x(Q);
    vector<int> y(Q);


    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < Q; i++) {
        cin >> T[i] >> x[i] >> y[i];
        x[i]--;
        y[i]--;
    }

    int diff = 0;
    bool shift_judge = false;

    for (int i = 0; i < Q; i++) {
        int tmp = 0;

        x[i] -= diff;
        if (x[i] < 0) {
            x[i] = N + (x[i] % N);
        }

        y[i] -= diff;
        if (y[i] < 0) {
            y[i] = N + (y[i] % N);
        }

        if (T[i] == TRADE) {
            tmp = A[x[i]];
            A[x[i]] = A[y[i]];
            A[y[i]] = tmp;
        }
        else {
            if (T[i] == SHIFT) {
                diff++;
            }
            else {
                if (T[i] == OUTPUT) {
                    cout << A[x[i]] << endl;
                }
            }
        }

        /*
        for (int i = 0; i < N; i++)
            cout << A[i] << '\t';
        cout << endl;
        }
        */
    }


    return 0;
}

