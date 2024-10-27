
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
    int L = 0, R = 0;
    string S = "atcoder";


    cin >> L >> R;


    for (int i = L - 1; i < R; i++) {
        cout << S[i];
    }


    return 0;
}

