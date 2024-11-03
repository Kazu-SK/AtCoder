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

    int size = S.size();

    char s1 = S[size - 1];
    char s2 = S[size - 2];
    char s3 = S[size - 3];


    if (s3 == 's' && s2 == 'a' && s1 == 'n') {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }


    return 0;
}

