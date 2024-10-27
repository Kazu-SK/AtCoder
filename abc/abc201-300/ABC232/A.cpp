
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
    string S;


    cin >> S;


    int ans = 0;


    ans = (S[0] - '0') * (S[2] - '0');

    cout << ans << endl;

    return 0;
}

