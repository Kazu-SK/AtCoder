
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;


int main()
{
    int N = 0;
    int ans = 1;


    cin >> N;

    for (int i = N; i >= 0; i--) {
    
        if (i != 0) {
            ans *= i;
        }
    }

    cout << ans << endl;

    return 0;
}

