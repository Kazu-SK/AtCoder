
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
    set<char> s;


    cin >> S;


    for (int i = 0; i < S.size(); i++) {
        s.insert(S[i]);
    }

    if (s.size() == 1) {
        cout << 1 << endl;
    }
    else {
        if(s.size() == 2) {
            cout << 3 << endl;
        }
        else {
            cout << 6 << endl;
        }
    }



    return 0;
}

