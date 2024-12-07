
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
    int direction[4][2] = { {1, 0}, {0, -1}, {-1, 0}, {0, 1} };
    int d_code = 0;
    int x = 0, y = 0;


    cin >> N;

    vector<char> T(N);


    for (int i = 0; i < N; i++)
        cin >> T[i];


    for (int i = 0; i < N; i++) {

        if (T[i] == 'S') {
            x += direction[d_code][0];
            y += direction[d_code][1];
        }

        if (T[i] == 'R') {
            d_code++;
            d_code %= 4;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}

