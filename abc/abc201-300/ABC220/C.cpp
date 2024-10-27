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
    LL X = 0;


    cin >> N;

    vector<int> A(N);
    vector<LL> sum(N + 1, 0);


    for (int i = 0; i < N; i++) {
        cin >> A[i];

        sum[i + 1] = A[i] + sum[i];
    }

    cin >> X;


    LL add_count = 0;
    LL amari = 0;
    LL ans = 0;

    add_count = X / sum[N];
    ans += add_count * N;

    amari = X % sum[N];

    if (amari > 0) {
        int pos = lower_bound(sum.begin(), sum.end(), amari) - sum.begin();
        ans += pos;

        if (amari == sum[pos]) {
            ans++;
        }
    }
    else {
        ans++;
    }

    cout << ans << endl;

    return 0;
}

