
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
    bool judge[10] = { false };


    cin >> S;


    for (int i = 0; i < S.size(); i++) {
        judge[S[i] - '0'] = true;
    }

    for (int i = 0; i < 10; i++) {
        if (judge[i] == false)
            cout << i << endl;
    }

    return 0;
}

