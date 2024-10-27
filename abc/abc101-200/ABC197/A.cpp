
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


    S.push_back(S[0]);
    S.erase(S.begin());

    cout << S << endl;

    return 0;
}

