
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
    vector<int> abc(3);



    for(int i = 0; i < 3; i++) {
        cin >> abc[i];
    }


    int b = abc[1];

    sort(abc.begin(), abc.end());

    if (b == abc[1]) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

