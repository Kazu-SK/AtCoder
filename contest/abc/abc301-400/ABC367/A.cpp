#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int A = 0, B = 0, C = 0;


    cin >> A >> B >> C;


    bool judge = true;

    if (A >= B && A < C) {
        judge = false;
    }

    if (B >= C) {
        if ((A >= B && A <= 23) || (A >= 0 && A < C)) {
            judge = false;
        }
    }

    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

