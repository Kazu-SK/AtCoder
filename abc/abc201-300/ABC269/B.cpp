
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
    string S[10];
    int A, B, C, D;


    for (int i = 0; i < 10; i++) {
        cin >> S[i];
    }

    int min_x = 1e8; 
    int min_y = 1e8; 
    int max_x = 0; 
    int max_y = 0; 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < S[i].size(); j++) {

            if (S[i][j] == '#') {
                min_x = min(min_x, i + 1);
                min_y = min(min_y, j + 1);
                max_x = max(max_x, i + 1);
                max_y = max(max_y, j + 1);
            }
        }
    }

    /*
    cout << "min_x = " << min_x << endl;
    cout << "min_y = " << min_y << endl;
    cout << "max_x = " << max_x << endl;
    cout << "max_y = " << max_y << endl;
    */

    A = min_x;
    B = max_x;
    C = min_y;
    D = max_y;

    cout << A << " " << B << endl;
    cout << C << " " << D << endl;


    return 0;
}

