
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
    string N;


    cin >> N;


    for (int i = N.size() - 1; i < 3; i++) {
        N.insert(N.begin(), '0');
    }

    cout << N << endl;


    return 0;
}

