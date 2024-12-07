
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

    vector<string> S(2);


    cin >> S[0];
    cin >> S[1];


    if ((S[0][0] == '.' && S[1][1] == '.') || (S[0][1] == '.' && S[1][0] == '.')) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }

    return 0;
}

