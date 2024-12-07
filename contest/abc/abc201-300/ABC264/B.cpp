
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
    int R = 0, C = 0;


    cin >> R >> C;

    if (max(abs(R - 8), abs(C - 8)) % 2 == 0)
        cout << "white" << endl;
    else
        cout << "black" << endl;

    return 0;
}

