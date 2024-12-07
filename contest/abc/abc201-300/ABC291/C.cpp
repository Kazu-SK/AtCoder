
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

enum Direct {
    R = 0,
    L,
    U,
    D
};

int main()
{
    int dx[4] = {1, -1, 0,  0};
    int dy[4] = {0, 0,  1, -1};
    int x = 0;
    int y = 0;
    map<pair<int, int>, bool> Root;


    int N = 0;


    cin >> N;

    vector<char> S(N);


    for (int i = 0; i < N; i++)
        cin >> S[i];


    bool judge = false;

    for (int i = 0; i < N; i++) {

        pair<int, int> coordinate;


        coordinate.first = x;
        coordinate.second = y;

        Root[coordinate] = true;

        switch (S[i]) {
        case 'R':
            x += dx[R];
            y += dy[R];
            break;
        case 'L':
            x += dx[L];
            y += dy[L];
            break;
        case 'U':
            x += dx[U];
            y += dy[U];
            break;
        case 'D':
            x += dx[D];
            y += dy[D];
            break;

        default:
            break;
        }

        coordinate.first = x;
        coordinate.second = y;

        //cout << x << " " << y << endl;

        if (Root[coordinate] == true) {
            judge = true;
            break;
        }
    }


    if (judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

