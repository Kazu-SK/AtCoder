
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
    int abc[3] = { 0 };


    for (int i = 0; i < 3; i++) {
        cin >> abc[i];
    }

    int ans = 0;

    for (int i = 0; i < 3; i++) {
        ans += 7 - abc[i];
    }

    cout << ans << endl;

    return 0;
}

