
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
    int N = 0;
    int A = 0;
    int Y = 0;
    int X = 0;


    cin >> N >> A >> X >> Y;


    int money = 0;

    for (int n = 1; n <= N; n++) {

        if (n >= A + 1) {
            money += Y;
        }
        else {
            money += X;
        }
    }

    cout << money << endl;

    return 0;
}

