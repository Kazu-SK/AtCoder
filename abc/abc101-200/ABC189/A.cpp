
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
    string C;


    cin >> C;


    if (C[0] == C[1] && C[0] == C[2]) {
        cout << "Won" << endl;
    }
    else {
        cout << "Lost" << endl;
    }

    return 0;
}

