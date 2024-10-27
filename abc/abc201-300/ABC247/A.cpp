
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


    cin >> S;

    S.pop_back();
    S.insert(S.begin(), '0');

    cout << S << endl;

    return 0;
}

