
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
    
    string ans = "AGCxxx";
    int N = 0;


    cin >> N;


    if (N >= 42) {
        N += 1;
    }

    ans[5] = (N % 10) + '0';
    N /= 10;
    ans[4] = (N % 10) + '0';
    N /= 10;
    ans[3] = (N % 100) + '0';

    cout << ans << endl;

    return 0;
}

