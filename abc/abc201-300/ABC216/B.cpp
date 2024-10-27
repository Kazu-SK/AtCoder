
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


    vector<string> S(N);
    vector<string> T(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];
    }

    bool judge = false;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (S[i] == S[j] && T[i] == T[j]) {
                judge = true;
            }
        }
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

