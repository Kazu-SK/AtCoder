
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
    vector<int> A(3);


    for (int i = 0; i < 3; i++)
        cin >> A[i];

    sort(A.begin(), A.end());

    if (abs(A[2] - A[1]) == abs(A[1] - A[0])) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

