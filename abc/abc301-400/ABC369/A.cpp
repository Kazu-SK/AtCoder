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

    if (A - B == 0) {
        cout << 1 << endl;
    }
    else {
        if ((A - B) % 2 == 0) {
            cout << 3 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}

