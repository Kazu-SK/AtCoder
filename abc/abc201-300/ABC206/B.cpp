
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
    //unsigned long long N = 0;
    LL N = 0;


    cin >> N;

    //unsigned long long ans = 0;
    //unsigned long long add_money = 1;
    //unsigned long long current_money = 1;
    LL ans = 1;
    LL add_money = 1;
    LL current_money = 0;

    while (current_money + add_money < N) {

        current_money += add_money;
        add_money++;
        ans++;
    }

    cout << ans << endl;

    return 0;
}

