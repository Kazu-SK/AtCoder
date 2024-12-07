#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{

    int N = 0;
    int C = 0;
    int ans = 1;
    int before = 0;

    cin >> N >> C;


    vector<int> T(N);


    for (int i = 0; i < N; i++)
        cin >> T[i];

    for (int i = 1; i < N; i++) {

        if (T[i] >= T[before] + C) {
            ans++;
            before = i;
        }
    }

    cout << ans << endl;


    return 0;
}

