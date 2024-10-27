
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
    int A = 0;
    int B = 0;


    cin >> A >> B;


    if (A > 0 && B == 0) {
        cout << "Gold" << endl;
    }
    else {
        if (A == 0 && B > 0) {
            cout << "Silver" << endl;
        }
        else {
            cout << "Alloy" << endl;
        }
    }


    return 0;
}

