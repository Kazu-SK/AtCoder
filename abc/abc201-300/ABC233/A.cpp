
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
    int x = 0;
    int y = 0;


    cin >> x >> y;


    int coin_count = 0;

    while (x < y) {
        x += 10;
        coin_count++;
    }

    cout << coin_count << endl;

    return 0;
}

