
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

    vector<int> p(N + 1);
    map<int, int> Map;

    for (int i = 1; i <= N; i++) {
        cin >> p[i];

        Map[p[i]] = i;
    }


    for (int i = 1; i <= N; i++) {
        cout << Map[i] << " ";
    }


    return 0;
}

