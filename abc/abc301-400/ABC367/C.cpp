#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int Pow(int x, int y) { //ans = x^y

    int ans = 1;

    for (int i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}

int main()
{
    int N = 0, K = 0;


    cin >> N >> K;

    vector<int> R(N);
    vector<int> A(N, 1);
    vector<bool> up(N, false);
    vector<vector<int>> A_ans;

    for (int i = 0; i < N; i++) {
        cin >> R[i];
    }

    int max_num = 0;
    int loop_num = 0;
    int init_kake = Pow(10, N - 1);
    int kake = init_kake;

    for (int i = 0; i < N; i++) {
        max_num += R[i] * kake;
        loop_num += A[i] * kake;
        kake /= 10;
    }

    //cout << max_num << endl;
    //cout << loop_num << endl;

    while (loop_num <= max_num) {

        //cout << loop_num << endl;
        int sum = 0;

        sum = 0;

        for (int i = 0; i < N; i++) {
            sum += A[i];
        }

        if (sum % K == 0) {
            for (int i = 0; i < N; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        }



        A[N - 1] += 1;

        for (int i = N - 1; i >= 0; i--) {

            if (i < N - 1 && up[i + 1] == true) {
                A[i]++;
                up[i + 1] = false;
            }

            if (i != 0 && A[i] > R[i]) {
                A[i] = 1;
                up[i] = true;
            }
        }

        loop_num = 0;
        kake = init_kake;

        for (int i = 0; i < N; i++) {
            loop_num += A[i] * kake;
            kake /= 10;
        }

    }


    return 0;
}

