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
    string abc = "ABC";


    cin >> S;

    sort(S.begin(), S.end());

    if (S == abc)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

