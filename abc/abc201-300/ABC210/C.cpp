
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
    int N = 0, K = 0;


    cin >> N >> K;


    vector<int> C(N);

    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    set<int> S;
    int ans = 0;

    for (int n = 0; n < N; n++) {

        if (n + K - 1 < N) {

            for (int c = n; c < n + K; c++) {
                S.insert(C[c]);
            }

            int S_size = S.size();

            ans = max(ans, S_size);

            S.clear();
        }
        else
            break;
    }

    cout << ans << endl;

    return 0;
}

