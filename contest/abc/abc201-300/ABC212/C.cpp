
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
    int N = 0, M = 0;


    cin >> N >> M;


    vector<int> A(N);
    vector<int> B(M);


    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < M; i++)
        cin >> B[i];


    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int ans = 1e9;

    for (int i = 0; i < N; i++) {

        int pos = lower_bound(B.begin(), B.end(), A[i]) - B.begin();
        int calc_B = 0;

        if (pos <= M - 1) {

            if (pos == 0) {
                calc_B = B[pos];
            }
            else {

                if(abs(A[i] - B[pos]) < abs(A[i] - B[pos - 1])) {
                    calc_B = B[pos];
                }
                else {
                    calc_B = B[pos-1];
                }
            }
        }
        else {
            calc_B = B[M - 1];
        }

        ans = min(ans, abs(A[i] - calc_B));
    }

    cout << ans << endl;

    return 0;
}

