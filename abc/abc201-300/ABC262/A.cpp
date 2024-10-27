
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int Y = 0;


    cin >> Y;

    int ans = 0;

    for (;;) {

        if (Y % 4 == 2) {
            ans = Y;
            break;
        }
        else {
            Y++;
        }
    }

    cout << ans << endl;

    return 0;
}

