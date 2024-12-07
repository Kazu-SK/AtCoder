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
    string S;

    cin >> S;

    vector<vector<int>> sum(26, vector<int>(S.size() + 1));

    LL ans = 0;


    for (int i = 0; i < S.size(); i++) {
        for (int j = 0; j < 26; j++) {
            sum[j][i + 1] = sum[j][i];
        }
        sum[S[i] - 'A'][i + 1]++;
    }

    for (int i = 0; i < S.size() - 1; i++) {
        for (int j = 0; j < 26; j++) {
            LL l = sum[j][i];
            LL r = sum[j][S.size()] - sum[j][i + 1];
            ans += l * r;
        }
    }

    cout << ans << endl;

    return 0;
}

