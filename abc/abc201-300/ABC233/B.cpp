
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
    int L = 0;
    int R = 0;

    string S;


    cin >> L >> R;
    cin >> S;


    L -= 1;
    R -= 1;

    int s_count = 0;

    for (int i = 0; i < S.size(); i++) {
        if (i >= L && i <= R) {
            cout << S[R - s_count];
            s_count++;
        }
        else {
            cout << S[i];
        }
    }

    /*
    0 1 2 3 4 5 6 7 8 9 10 
    0 1 2 6 5 4 3 7 8 9 10
    */


    return 0;
}

