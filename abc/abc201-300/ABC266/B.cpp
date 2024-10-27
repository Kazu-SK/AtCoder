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
    LL N;
    LL x;

    const LL A = 998244353;

    cin >> N;


    x = N % A;

    //cout << x << endl;


    if (N < 0) {
        //cout << (N - (A + x)) % A << endl;
        if (x == 0) {
            cout << 0 << endl;
        }
        else {
            cout << A + x << endl;
            //cout << (N - (A + x)) % A << endl;
        }
    }
    else {
        //cout << (N - x) % A << endl;
        if (x == 0) {
            cout << 0 << endl;
        }
        else {
            if (N < A) {
                cout << N << endl;
                //cout << (N - N) % A << endl;
            }
            else {
                cout << x << endl;
                //cout << (N - x) % A << endl;
            }
        }
    }




    return 0;
}

