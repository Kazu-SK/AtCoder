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
    int N = 0, M = 0;


    cin >> N >> M;

    int init_num = 0;

    for (int i = 0; i < N; i++) {

        init_num += (1 << i);
    }

    vector<int> bit1;
    vector<vector<int>> ans;

    for (int num = init_num; num < (1 << M); num++) {

        for (int j = 0; j < M; j++) {
            if (num & (1 << j)) {
                bit1.push_back(j + 1);
            }
        }

        if (bit1.size() == N) {
            ans.push_back(bit1);
        }

        bit1.clear();
    }


    sort(ans.begin(), ans.end());


    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

