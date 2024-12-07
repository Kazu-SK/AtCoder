
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


    cin >> A >> B >> C;

    int num = 0;
    bool judge = false;

    while (num <= B) {
        num += C;

        if (num >= A && num <= B) {
            judge = true;
            break;
        }
    }

    if (judge) {
        cout << num << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}

