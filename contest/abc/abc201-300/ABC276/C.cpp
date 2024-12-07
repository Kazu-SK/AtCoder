
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

void swap(int& x, int& y) {

    int tmp = 0;

    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int N = 0;


    cin >> N;


    vector<int> P(N);

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    int j = N - 1;
    int tmp = 0;

    while (P[j - 1] < P[j]) {
        j--;
    }

    int limit_P = P[j - 1];
    int limit_max = 0;
    int limit_max_itr = j - 1;
    int exchange_j = j - 1;
    int init_j = j;

    while (j < N) {
        if (P[j] < limit_P) {
            if (P[j] > limit_max) {
                limit_max = P[j];
                limit_max_itr = j;
            }
        }

        j++;
    }

   // cout << exchange_j << " " << limit_max_itr << endl;

    swap(P[exchange_j], P[limit_max_itr]);

    sort(P.rbegin(), P.rend() - init_j);

    for (int i = 0; i < N; i++) {
        cout << P[i] << " ";
    }

    return 0;
}

