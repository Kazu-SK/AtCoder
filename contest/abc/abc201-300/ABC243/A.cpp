
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
    int V = 0;
    int ABC[3] = { 0 };


    cin >> V;

    for (int i = 0; i < 3; i++)
        cin >> ABC[i];


    int itr = 0;

    for(;;){

        V -= ABC[itr];

        if (V < 0) {
            if (itr == 0)cout << "F" << endl;
            if (itr == 1)cout << "M" << endl;
            if (itr == 2)cout << "T" << endl;
            break;
        }

        itr++;

        itr %= 3;
    }

    return 0;
}

