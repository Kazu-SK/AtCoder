
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
    int x = 0, y = 0;
    int hand[3] = { false };


    cin >> x >> y;

    int z = 0;

    if (x == y) {
        z = x;
    }
    else {
        hand[x] = true;
        hand[y] = true;

        for (int i = 0; i < 3; i++) {
            if (hand[i] == false) {
                z = i;
                break;
            }
        }
    }

    cout << z << endl;

    return 0;
}

