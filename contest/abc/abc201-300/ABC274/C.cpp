#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

map<int, int> parent_map;
map<int, int> memo;

int SearchGeneration(int k, int ans = 0) {

    if (parent_map[k] == 0) {
        memo[k] = ans;
        return ans;
    }
    else {
        if (memo[k] > 0) {
            ans += memo[k];
            return ans;
        }
        else {
			ans++;
			ans = SearchGeneration(parent_map[k], ans);
        }
    }

    memo[k] = ans;

    return ans;
}

int main()
{
    int N = 0;

    cin >> N;

    vector<int> A(N + 1);
    parent_map[1] = 0;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];

        parent_map[2 * i] = A[i];
        parent_map[2 * i + 1] = A[i];
    }

    
    for (int k = 1; k <= 2 * N + 1; k++) {
        cout << "k = " << k << "\t";
        cout << parent_map[k] << endl;
    }

    for (int k = 1; k <= 2 * N + 1; k++) {

        cout << SearchGeneration(k) << endl;
    }

    return 0;
}

