
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
    int A = 0, B = 0;


    cin >> A >> B;


    int min_sum = A;
    int max_sum = 6 * A;


    if (B >= min_sum && B <= max_sum) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

