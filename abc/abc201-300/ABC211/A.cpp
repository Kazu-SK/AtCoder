
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
    double C = 0;


    cin >> A >> B;


    C = ((double)A - B) / 3 + B;

    printf("%.5f\n", C);

    return 0;
}

