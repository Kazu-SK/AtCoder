
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
    int S, T, X;


    cin >> S >> T >> X;

    bool judge = false;

    if (X >= S && X < T) {
        judge = true;
    }

    if (S >= T && ((X >= S && X <= 23) || (X >= 0 && X < T))) {
        judge = true;
    }


    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

