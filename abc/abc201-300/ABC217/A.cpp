
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
    string S, T;
    vector<string> ST;

    cin >> S >> T;

    ST.push_back(S);
    ST.push_back(T);


    sort(ST.begin(), ST.end());


    if (ST[0] == S) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    
    return 0;
}

