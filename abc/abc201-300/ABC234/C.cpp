
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

string Base10to2(LL n) {

    string ans;

    int waru = 1;
    int i_amari;
    char c_amari;

    if (n == 0) {
        ans = '0';
        return ans;
    }

    while (n) {

        i_amari = n % 2;
        n /= 2;

        c_amari = i_amari + '0';

        ans.insert(ans.begin(), c_amari);
    }

    return ans;
}

int main()
{
    LL K = 0;
    string ans;


    cin >> K;


    ans = Base10to2(K);

    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == '1')
            ans[i] = '2';
    }

    cout << ans << endl;

    return 0;
}

