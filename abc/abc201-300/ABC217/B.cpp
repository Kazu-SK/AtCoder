
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
    vector<string> S(3);
    map<string, bool> Map;


    Map["ABC"] = false;
    Map["ARC"] = false;
    Map["AGC"] = false;
    Map["AHC"] = false;

    for (int i = 0; i < 3; i++) {
        cin >> S[i];
        Map[S[i]] = true;
    }


    for (auto p : Map) {
        if (p.second == false) {
            cout << p.first << endl;
        }
    }

    return 0;
}

