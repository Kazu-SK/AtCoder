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

    vector<int> A(N);
    vector<LL> amari(200, 0);


    for (int i = 0; i < N; i++) {
        cin >> A[i];

        amari[A[i] % 200]++;
    }


    LL ans = 0;

    for (int i = 0; i < 200; i++) {
        ans += (amari[i] * (amari[i] - 1)) / 2;
    }

    cout << ans << endl;

    return 0;
}

