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
    vector<string> S(12);


    for (int i = 0; i < S.size(); i++) {
        cin >> S[i];
    }


    int ans = 0;

    for (int i = 0; i < S.size(); i++) {
        int i_size = i + 1;


        if (S[i].size() == i_size) {
            ans++;
        }
    }

    cout << ans << endl;


    return 0;
}

