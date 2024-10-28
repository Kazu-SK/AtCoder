
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

LL Base26to10(string n) {

    LL ans = 0;

    int n_str = n.size() - 1;
    LL n_keta = 1;

    while (n_str >= 0) {
        ans += (n[n_str] - 'A' + 1) * n_keta;
        n_keta *= 26;
        n_str--;
    }

    return ans;
}

int main()
{
    string S;
    LL ans = 0;


    cin >> S;

    ans = Base26to10(S);

    cout << ans << endl;

    return 0;
}

