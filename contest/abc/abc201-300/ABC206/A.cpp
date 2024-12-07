
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
    int N = 0;


    cin >> N;


    int ans = 0;

    ans = N * 1.08;


    int PRICE = 206;

    if (ans == PRICE) {
        cout << "so-so" << endl;
    }
    else {
        if (ans < PRICE) {
            cout << "Yay!" << endl;
        }
        else {
            cout << ":(" << endl;
        }
    }

    return 0;
}

