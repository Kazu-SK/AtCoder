
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


    vector<int> S(N);
    vector<LL> T(N);
    vector<LL> ans(N);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    LL min_T = 1e10;
    LL init_i = 0;

    for (int i = 0; i < N; i++) {
        cin >> T[i];

        if (T[i] < min_T) {
            init_i = i;
            min_T = T[i];
        }
    }

    ans[init_i] = min_T;

    for (int i = init_i + 1; i <= init_i + N ; i++) {

        int search_i = i % N;
        int left_i;

        if (search_i == 0)
            left_i = N - 1;
        else
            left_i = search_i - 1;

        if (T[search_i] <= ans[left_i] + S[left_i]) {
            ans[search_i] = T[search_i];
        }
        else {
            ans[search_i] = ans[left_i] + S[left_i];
        }

    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}

