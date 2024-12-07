
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

    
    if (N % 100 < 10) {
        cout << 0 << N % 100 << endl;
    }
    else {
        cout << N % 100 << endl;
    }


    return 0;
}

