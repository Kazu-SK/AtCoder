#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<LL> A(N);
    vector<LL> B(N);
    vector<LL> C(N);
    map<LL, LL> Map_A;
    map<LL, LL> Map_B;
    map<LL, LL> Map_C;

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < N; i++)
        cin >> B[i];

    for (int i = 0; i < N; i++)
        cin >> C[i];


    for (int i = 0; i < N; i++) {

        A[i] %= 46;
        B[i] %= 46;
        C[i] %= 46;

        Map_A[A[i]]++;
        Map_B[B[i]]++;
        Map_C[C[i]]++;
    }


    LL ans = 0;

    for (int a = 0; a <= 45; a++) {
        for (int b = 0; b <= 45; b++) {
            for (int c = 0; c <= 45; c++) {

                if ((a + b + c) % 46 == 0) {
                    ans += Map_A[a] * Map_B[b] * Map_C[c];
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}

