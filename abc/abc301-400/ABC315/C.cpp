
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
    LL max_m = 0;


    cin >> N;

    vector<pair<LL, int>> p(N);

    for (int i = 0; i < N; i++) {
        cin >> p[i].second;
        cin >> p[i].first;
    }

    sort(p.rbegin(), p.rend());



    for (int i = 1; i < N; i++) {
        
        if (p[0].second == p[i].second) {
            max_m = max(max_m, p[0].first + p[i].first / 2);
        }
        else {
            max_m = max(max_m, p[0].first + p[i].first);
        }
    }

    cout << max_m << endl;

    return 0;
}

