
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
    long long N;
    vector<LL> ans;

    
    cin >> N;

    ans.push_back(0);

    for (int i = 0; i < 60; i++) {

        if (N & (1LL << i)) {
            int sz = ans.size();
            for (int j = 0; j < sz; j++) {
                ans.push_back(ans[j] | (1LL << i));
            }
        }
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}

