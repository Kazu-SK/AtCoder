
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
    int X = 0;


    cin >> X;


    if (X % 100 == 0 && X != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

