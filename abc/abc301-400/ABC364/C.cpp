#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

using LL = long long;

int main()
{
    int N = 0;
    LL X = 0, Y = 0;


    cin >> N >> X >> Y;

    vector<LL> A(N + 1, 0);
    vector<LL> B(N + 1, 0);

    vector<LL> A_sum(N + 1, 0);
    vector<LL> B_sum(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            A_sum[i] = A[i];
        }
        else {
            A_sum[i] += A_sum[i - 1] + A[i];
        }
        //cout << A_sum[i] << " ";
    }
    //cout << endl;

    for (int i = 1; i < N; i++) {
        cin >> B[i];
    }

    sort(B.rbegin(), B.rend());

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            B_sum[i] = B[i];
        }
        else {
            B_sum[i] += B_sum[i - 1] + B[i];
        }
        //    cout << B_sum[i] << " ";
    }
    //cout << endl;

    int ans_x = 0;
    for (int i = 0; i < N; i++) {
        ans_x = i + 1;
        if (A_sum[i] > X) {
            break;
        }
    }

    int ans_y = 0;
    for (int i = 0; i < N; i++) {
        ans_y = i + 1;
        if (B_sum[i] > Y) {
            break;
        }
    }

    cout << min(ans_x, ans_y) << endl;

    return 0;
}

