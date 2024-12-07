
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
    int A = 0, B = 0, C = 0, D = 0;


    cin >> A >> B >> C >> D;


    if (A > C) {

        cout << "Aoki" << endl;
    }
    else {

        if (A < C) {
            cout << "Takahashi" << endl;
        }
        else {
            if (B <= D) {
                cout << "Takahashi" << endl;
            }
            else {
                cout << "Aoki" << endl;
            }
        }
    }


    return 0;
}

