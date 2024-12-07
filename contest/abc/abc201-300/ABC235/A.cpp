
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
    string S;


    cin >> S;


    int a = S[0] - '0';
    int b = S[1] - '0';
    int c = S[2] - '0';


    int abc = a * 100 + b * 10 + c;
    int bca = b * 100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;


    cout << abc + bca + cab << endl;


    return 0;
}

