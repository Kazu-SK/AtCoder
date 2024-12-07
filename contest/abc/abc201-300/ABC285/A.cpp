#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int a = 0, b = 0;


    cin >> a >> b;

    bool judge = false;

    if (a * 2 == b) {
        judge = true;
    }

    if (a * 2 + 1 == b) {
        judge = true;
    }


    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

