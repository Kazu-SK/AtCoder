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
    int N = 0, K = 0;


    cin >> N >> K;

    vector<pair<int, LL>> ab(N);

    LL medicine_sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> ab[i].first >> ab[i].second;
        medicine_sum += ab[i].second;
    }


    sort(ab.begin(), ab.end());

    LL days = 0;
    LL drink = 0;

    for (;;) {
        if (medicine_sum <= K) {
            break;
        }

        days = ab[drink].first;

        while (drink < N && ab[drink].first <= days) {
            medicine_sum -= ab[drink].second;
            drink++;
        }
    }

    cout << days + 1 << endl;


    return 0;
}

