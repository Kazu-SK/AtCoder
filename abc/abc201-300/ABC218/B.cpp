
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
    int P[26] = { 0 };
    string S;


    for (int i = 0; i < 26; i++)
        cin >> P[i];


    for (int i = 0; i < 26; i++) {
        S += char(P[i] - 1) + 'a';
    }

    cout << S << endl;


    return 0;
}

