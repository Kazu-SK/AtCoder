
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
    int X, Y, Z;


    cin >> X >> Y >> Z;

    int ans = 0;


    if ((X > 0 && (X < Y || Y < 0)) || (X < 0 && (X > Y || Y > 0))) {

        ans += abs(X);
        cout << ans << endl;
        return 0;
    }
    else {

        /*
        if ((X > 0 && Z > Y) || (X < 0 && Z < Y)) {
            cout << -1 << endl;
            return 0;
        }
        */

        if ((X > 0 && Z < Y) || (X < 0 && Z > Y)) {

            if ((X > 0 && Z < 0) || (X < 0 && Z > 0)) {
                ans += abs(Z) * 2;
            }

			ans += abs(X);
			cout << ans << endl;
			return 0;
        }
        else {
            cout << -1 << endl;
            return 0;
        }
    }

    return 0;
}

