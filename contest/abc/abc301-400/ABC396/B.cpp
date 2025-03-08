#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
    int Q = 0;
    int last_M_i = 0;


    vector<int> M;

    for (int i = 0; i < 100; i++) {
        M.push_back(0);
    }

    cin >> Q;

    last_M_i = M.size() - 1;

    for (int q = 0; q < Q; q++) {
        int query = 0;
        int x = 0;


        cin >> query;

        if (query == 1) {
            cin >> x;
            M.push_back(x);
        }
        else if (query == 2) {
            cout << M[last_M_i] << endl;
            M.pop_back();
        }
        else {
        }

        last_M_i = M.size() - 1;
    }

    return 0;
}

