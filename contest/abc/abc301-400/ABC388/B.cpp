#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, D = 0;


    cin >> N >> D;

    vector<int> T(N + 1);
    vector<int> L(N + 1);
    vector<int> H(D + 1, 0);


    for (int n = 1; n <= N; n++) {
        cin >> T[n] >> L[n];
    }

    for (int d = 1; d <= D; d++) {
        for (int n = 1; n <= N; n++) {
            H[d] = max(H[d], T[n] * (L[n] + d));
        }
    }

    for (int d = 1; d <= D; d++) {
        cout << H[d] << endl;
	}

    return 0;
}

