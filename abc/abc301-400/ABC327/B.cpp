#include <iostream>

using namespace std;
using LL = long long;


LL Pow(int m) {

    LL ans = 1;

    for (int i = 1; i <= m; i++) {
        ans *= m;
    }

    return ans;
}

int main()
{
    LL B = 0;

    cin >> B;

    int ans = -1;

    for (int i = 1; i <= 15; i++) {
        LL A = 0;
        A = Pow(i);

        if (A == B) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

