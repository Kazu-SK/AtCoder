
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

    if (X < 40) {
        cout << 40 - X << endl;
    }

    if (X >= 40 && X < 70) {
        cout << 70 - X << endl;
    }

    if (X >= 70 && X < 90) {
        cout << 90 - X << endl;
    }

    if (X >= 90) {
        cout << "expert" << endl;
    }

    return 0;
}

