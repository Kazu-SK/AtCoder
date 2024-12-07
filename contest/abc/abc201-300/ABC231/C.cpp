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
    LL N = 0;
    LL Q = 0;


    cin >> N >> Q;


    vector<LL> A(N);
    vector<LL> x(Q);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < Q; i++) {

        cin >> x[i];

        LL ans = 0;
        LL pos = lower_bound(A.begin(), A.end(), x[i]) - A.begin();

        //cout << pos << endl;

        if (pos < N) {
            ans = N - pos;
        }
        else {
            ans = 0;
        }

        cout << ans << endl;
    }

    return 0;
}

