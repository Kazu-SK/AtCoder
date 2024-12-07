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
    char S_AB;
    char S_AC;
    char S_BC;

    int A = 0;
    int B = 0;
    int C = 0;


    cin >> S_AB >> S_AC >> S_BC;


    if (S_AB == '<' && S_AC == '<') {

        if (S_BC == '<') {
            cout << "B" << endl;
        }
        else {
            cout << "C" << endl;
        }
    }

    if (S_AB == '<' && S_AC == '>') {
        cout << "A" << endl;
    }

    if (S_AB == '>' && S_AC == '<') {
        cout << "A" << endl;
    }

    if (S_AB == '>' && S_AC == '>') {
        if (S_BC == '<') {
            cout << "C" << endl;
        }
        else {
            cout << "B" << endl;
        }
    }



    return 0;
}

