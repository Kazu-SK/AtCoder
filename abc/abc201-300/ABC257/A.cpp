
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
    int N = 0, X = 0;


    cin >> N >> X;

    vector<char> S;

    for (int i = 0; i < 26; i++) {
        char s = 'A' + char(i);

        for (int j = 0; j < N; j++) {
            S.push_back(s);
        }
    }

    cout << S[X - 1] << endl;

    return 0;
}

