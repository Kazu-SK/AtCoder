
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
    string S;
    int a = 0, b = 0;

    cin >> S;
    cin >> a >> b;

    char tmp;


    tmp = S[a - 1];
    S[a - 1] = S[b - 1];
    S[b - 1] = tmp;

    cout << S << endl;

    return 0;
}

