
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
    int Q = 0;

    cin >> N;


    vector<LL> q(N + 1);
    vector<LL> r(N + 1);
    
    for (int i = 1; i <= N; i++) {
        cin >> q[i] >> r[i];
    }

    cin >> Q;

    vector<LL> t(Q);
    vector<LL> d(Q);

    for (int i = 0; i < Q; i++) {
        cin >> t[i] >> d[i];
    }

    for (int i = 0; i < Q; i++) {

        if (d[i] <= r[t[i]]) {
            cout << r[t[i]] << endl;
        }
        else {
            if (d[i] > r[t[i]] && d[i] < q[t[i]]) {
                cout << q[t[i]] + r[t[i]] << endl;
            }
            else {
                LL tmp = d[i] / q[t[i]];

                if (d[i] % q[t[i]] > r[t[i]]) {
                    cout << q[t[i]] * (tmp + 1) + r[t[i]] << endl;
                }
                else {
                    cout << d[i] + (r[t[i]] - d[i] % q[t[i]]) << endl;
                }
            }
        }
    }

    return 0;
}

