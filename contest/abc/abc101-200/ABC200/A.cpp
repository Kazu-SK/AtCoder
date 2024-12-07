
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
    int N = 0;


    cin >> N;



    if (N % 100 == 0) {
        cout << N / 100;
    }
    else {
        cout << N / 100 + 1;
    }

    return 0;
}

