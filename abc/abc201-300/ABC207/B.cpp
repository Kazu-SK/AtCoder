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
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;


    cin >> A >> B >> C >> D;

    //A + Bx <= Cx * D
    //(B - C*D)x <= -A
    //x <= - A / (B - C*D)
    //x <= A / (C*D - B)


    int ans = -1;

    for (int x = 1; x <= A; x++) {

        LL blue = A + (LL)B * x;
        LL red = (LL)C * x * D;

        if (blue <= red) {
            ans = x;
            break;
        }
    }

    cout << ans << endl;


    return 0;
}

