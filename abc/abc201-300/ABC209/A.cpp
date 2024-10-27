
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
    int A = 0, B = 0;


    cin >> A >> B;


    if (A > B) {
        cout << 0 << endl;
    }
    else {
        cout << B - A + 1 << endl;
    }

    return 0;
}

