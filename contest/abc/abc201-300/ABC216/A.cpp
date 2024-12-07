
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
    string XY;


    cin >> XY;


    int y_num = XY[XY.size() - 1] - '0';
    int x_num = 0;

    if (XY[1] == '.') {
        x_num = XY[0] - '0';
    }
    else {
        x_num = ((XY[0] - '0') * 10) + (XY[1] - '0');
    }

    if (y_num <= 2) {
        cout << x_num << "-" << endl;
    }
    else {
        if (y_num >= 3 && y_num <= 6) {
            cout << x_num << endl;
        }
        else {
            cout << x_num << "+" << endl;
        }
    }
    
    return 0;
}

