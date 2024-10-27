
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
    
    vector<string> S(4);
    map<string, bool> Map;


    Map["H"] = false;
    Map["2B"] = false;
    Map["3B"] = false;
    Map["HR"] = false;

    for (int i = 0; i < 4; i++) {
        cin >> S[i];
        Map[S[i]] = true;
    }

    bool judge = true;

    for (auto p : Map) {
        
        if (p.second == false) {
            judge = false;
        }
    }

    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

