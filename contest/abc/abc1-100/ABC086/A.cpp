
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int a, b;


    cin >> a >> b;


    int ans = (a * b) % 2;


    if (ans == 1) {
        cout << "Odd" << endl;
    }
    else {
        cout << "Even" << endl;
    }

    return 0;
}

