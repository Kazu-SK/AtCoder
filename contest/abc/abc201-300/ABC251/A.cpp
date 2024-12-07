
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    string S;
    string ans;


    cin >> S;


    while (ans.size() < 6) {
        ans += S;
    }

    cout << ans << endl;

    return 0;
}

