
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
    int Q = 0;


    cin >> N >> Q;


    vector<int> a(N);
    vector<int> x(Q);
    vector<int> k(Q);

    map<int, vector<int>> Map;

    for (int i = 0; i < N; i++) {
        cin >> a[i];

        Map[a[i]].push_back(i + 1);
    }

    for (int i = 0; i < Q; i++) {
        cin >> x[i] >> k[i];
    }

    for (int i = 0; i < Q; i++) {

        if (k[i] - 1 < Map[x[i]].size()) {
            cout << Map[x[i]][k[i] - 1] << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }

    return 0;
}

