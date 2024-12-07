
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
    LL N = 0;
    string ans;


    cin >> N;


    while (N > 0) {

        if (N % 2 == 0) {
            N /= 2;
            ans.insert(ans.begin(), 'B');
        }
        else {
            N -= 1;
            ans.insert(ans.begin(), 'A');
        }
    }

    cout << ans << endl;

    return 0;
}

