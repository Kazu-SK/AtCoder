
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
    int N = 0;


    cin >> N;

    vector<int> A(N + 1);
    vector<int> B(N + 1);
    vector<int> C(N + 1);

    for (int i = 1; i <= N; i++)
        cin >> A[i];

    for (int j = 1; j <= N; j++)
        cin >> B[j];

    for (int z = 1; z <= N; z++) {
        cin >> C[z];
    }


    vector<int> count(N + 1, 0);


    for (int i = 1; i <= N; i++) {
        count[B[C[i]]]++;
    }

    LL ans = 0;

    for (int i = 1; i <= N; i++) {
        ans += count[A[i]];
    }


    cout << ans << endl;

    return 0;
}

