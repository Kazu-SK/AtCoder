
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int X, Y, N;


    cin >> X >> Y >> N;

    int price[2] = { 0 };

    price[0] = (N / 3) * Y + (N % 3) * X;
    price[1] = N * X;

    if (price[0] < price[1]) {
        cout << price[0];
    }
    else {
        cout << price[1];
    }

    return 0;
}

