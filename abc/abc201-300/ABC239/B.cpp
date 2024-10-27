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
    LL X = 0;


    cin >> X;


    if (X > 0) {
        cout << X / 10 << endl;
    }
    else {
        if ((X * -1) % 10 > 0) {
            cout << (X / 10) - 1 << endl;
        }
        else {
            cout << X / 10 << endl;
        }
    }

    return 0;
}

