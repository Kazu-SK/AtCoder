
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
    int C = 0;


    cin >> A >> B;


    C = A + B; //乳固形分

    if (C >= 15 && B >= 8) {
        cout << 1 << endl;
    }
    else {
        if (C >= 10 && B >= 3) {
            cout << 2 << endl;
        }
        else {
            if (C >= 3) {
                cout << 3 << endl;
            }
            else {
                cout << 4 << endl;
            }
        }
    }
    

    return 0;
}

