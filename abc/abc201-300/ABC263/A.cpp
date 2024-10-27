
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
    int card[5];
    int c_count[14] = { 0 };


    for (int i = 0; i < 5; i++) {
        cin >> card[i];
        c_count[card[i]]++;
    }

    int count2 = 0;
    int count3 = 0;
    int count0 = 0;

    for (int i = 1; i <= 14; i++) {
        if (c_count[i] == 2) {
            count2++;
        }

        if (c_count[i] == 3) {
            count3++;
        }

        if (c_count[i] == 0) {
            count0++;
        }
    }


    if (count0 == 11 && count2 == 1 && count3 == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;



    return 0;
}

