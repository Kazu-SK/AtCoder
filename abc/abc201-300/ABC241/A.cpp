
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

    int a[10];


    for (int i = 0; i < 10; i++)
        cin >> a[i];


    int count = 0;
    int num = 0;
    int itr = 0;
    while (count < 3) {

        num = a[itr];
        itr = num;
        count++;

    }
    cout << num << endl;

    return 0;
}

