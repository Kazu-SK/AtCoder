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
    int L = 0, R = 0;


    cin >> L >> R;


    if ((L == 1 && R == 1) || (L == 0 && R == 0)) {
        cout << "Invalid" << endl;
    }
    else {
        if (L == 1 && R == 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}

