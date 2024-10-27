
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


    typedef struct {
        string S;
        int T;
    }Mount;

    vector<Mount> M(N);

    for (int i = 0; i < N; i++) {
        cin >> M[i].S;
        cin >> M[i].T;
    }

    sort(M.rbegin(), M.rend(), [&](const auto& l, const auto& r) {
        return l.T < r.T;
        });

    cout << M[1].S << endl;

    return 0;
}

