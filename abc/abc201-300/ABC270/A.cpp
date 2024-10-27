
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

    int point[] = { 1, 2, 4 };

    cin >> A >> B;

    bool A_c[3] = { false };
    bool B_c[3] = { false };
    bool C_c[3] = { false };


    if (A == 1)A_c[0] = true;
    if (A == 2)A_c[1] = true;
    if (A == 4)A_c[2] = true;

    if (A == 3) {
        A_c[0] = true;
        A_c[1] = true;
    }

    if (A == 5) {
        A_c[0] = true;
        A_c[2] = true;
    }

    if (A == 6) {
        A_c[1] = true;
        A_c[2] = true;
    }

    if (A == 7) {
        A_c[0] = true;
        A_c[1] = true;
        A_c[2] = true;
    }

    if (B == 1)B_c[0] = true;
    if (B == 2)B_c[1] = true;
    if (B == 4)B_c[2] = true;

    if (B == 3) {
        B_c[0] = true;
        B_c[1] = true;
    }

    if (B == 5) {
        B_c[0] = true;
        B_c[2] = true;
    }

    if (B == 6) {
        B_c[1] = true;
        B_c[2] = true;
    }

    if (B == 7) {
        B_c[0] = true;
        B_c[1] = true;
        B_c[2] = true;
    }


    for (int i = 0; i < 3; i++) {
        if (A_c[i] == true || B_c[i] == true)
            C_c[i] = true;
    }

    for (int i = 0; i < 3; i++) {
        if (C_c[i]) {
            C += point[i];
        }
    }

    cout << C << endl;

    return 0;
}

