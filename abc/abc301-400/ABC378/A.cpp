
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int count[5] = { 0 };

    vector<int> A(5);
    int ans = 0;


    for (int i = 1; i <= 4; i++) {
        cin >> A[i];
        count[A[i]]++;
    }

    for (int i = 1; i <= 4; i++) {
        ans += count[i] / 2;
    }

    cout << ans << endl;

    return 0;
}

