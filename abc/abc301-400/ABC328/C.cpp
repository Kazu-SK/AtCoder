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
    int N = 0, Q = 0;
    string S;


    cin >> N >> Q;
    cin >> S;


    vector<int> l(Q);
    vector<int> r(Q);
    vector<int> sum(S.size());

    for (int i = 0; i < Q; i++) {
        cin >> l[i] >> r[i];

        l[i]--;
        r[i]--;
    }

    for (int i = 1; i < S.size(); i++) {

        char before_s = S[i - 1];

        if (S[i] == before_s) {
            sum[i] = sum[i - 1] + 1;
        }
        else {
            sum[i] = sum[i - 1];
        }
    }


    for (int i = 0; i < Q; i++) {
        cout << sum[r[i]] - sum[l[i]] << endl;
    }



    return 0;
}

