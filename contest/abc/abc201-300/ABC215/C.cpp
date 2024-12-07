
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


int main() {
    string S;
    int K = 0;

    cin >> S >> K;

    vector<char> list(S.size());
    vector<vector<char>> ans;

    for (int i = 0; i < S.size(); i++) {
        list[i] = S[i];
    } 

    sort(list.begin(), list.end());

    do {
        ans.push_back(list);
    } while (next_permutation(list.begin(), list.end()));


    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < S.size(); i++) {
        cout << ans[K - 1][i];
    }

    return 0;
}

