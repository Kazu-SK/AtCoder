
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
    int x[3] = { 0 };
    int y[3] = { 0 };


    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }

    int x_ans = 0;

    for (int i = 1; i < 3; i++) {
        if (i == 1 && (x[i] == x[i - 1])) {
            x_ans = x[2];
            break;
        }

        if (i == 2 && (x[i] == x[i - 1])) {
            x_ans = x[0];
        }

        if (i == 2 && (x[i] != x[i - 1])) {
            x_ans = x[1];
        }
    }

    int y_ans = 0;

    for (int i = 1; i < 3; i++) {
        if (i == 1 && (y[i] == y[i - 1])) {
            y_ans = y[2];
            break;
        }

        if (i == 2 && (y[i] == y[i - 1])) {
            y_ans = y[0];
        }

        if (i == 2 && (y[i] != y[i - 1])) {
            y_ans = y[1];
        }
    }

    cout << x_ans << " " << y_ans << endl;

    return 0;
}

