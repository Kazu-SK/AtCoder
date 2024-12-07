
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
    int a, b;


    cin >> a >> b;


    bool judge = false;

    if ((a + 1) % 10 == b)judge = true;
    if ((b + 1) % 10 == a)judge = true;
    if (a - 1 == b)judge = true;
    if (b - 1 == a)judge = true;


    if (judge)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

