
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


    vector<int> t(N);
    vector<double> l(N);
    vector<double> r(N);

    for (int i = 0; i < N; i++) {
        cin >> t[i] >> l[i] >> r[i];
    }

    for (int i = 0; i < N; i++) {

        if (t[i] == 4) {
            l[i] += 0.5;
            r[i] -= 0.5;
        }

        if (t[i] == 3) {
            l[i] += 0.5;
        }

        if (t[i] == 2) {
            r[i] -= 0.5;
        }
    }

    int ans = 0;

    for (int i = 0; i < N - 1 ; i++) {
        for (int j = i + 1; j < N; j++) {
            double common = 0.0;

            common = min(r[i], r[j]) - max(l[i], l[j]);

            if (common >= 0.0) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}

