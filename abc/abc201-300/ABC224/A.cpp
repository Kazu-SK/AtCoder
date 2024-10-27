
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


    string s_er;
    string s_ist;

    for (int i = S.size() - 2; i < S.size(); i++) {
        s_er.push_back(S[i]);
    }

    for (int i = S.size() - 3; i < S.size(); i++) {
        s_ist.push_back(S[i]);
    }

    if (s_er == "er") {
        cout << "er" << endl;
    }
    else {
        if (s_ist == "ist")
            cout << "ist" << endl;
    }

    return 0;
}

