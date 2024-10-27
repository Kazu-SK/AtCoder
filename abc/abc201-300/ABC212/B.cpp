
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
    char X[4];
    int X_num[4];


    for (int i = 0; i < 4; i++) {
        cin >> X[i];

        X_num[i] = X[i] - '0';
    }

    bool same_num = true;
    bool cont_num = true;

    for (int i = 1; i < 4; i++) {
        if (X_num[i] != X_num[i - 1]) {
            same_num = false;
        }
    }

    for (int i = 1; i < 4; i++) {
        if (X_num[i] != (X_num[i - 1] + 1) % 10) {
            cont_num = false;
        }
    }

    if (same_num == true || cont_num == true) {
        cout << "Weak" << endl;
    }
    else {
        cout << "Strong" << endl;
    }

    return 0;
}

