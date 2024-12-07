#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

LL Pow(int x, int y) { //ans = x^y

    LL ans = 1;

    for (int i = 0; i < y; i++) {
        ans *= x;
    }

    return ans;
}

int main()
{
    int A = 0, B = 0;


    cin >> A >> B;

    cout << Pow(A, B);

    return 0;
}

