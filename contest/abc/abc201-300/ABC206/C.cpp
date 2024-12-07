
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

    vector<LL> A(N);
    map<int, LL> Map;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        Map[A[i]]++;
    }

    //sort(A.begin(), A.end());

    LL all = (LL)N * (N - 1) / 2;
    LL ans = all;

    for (auto m : Map) {


		LL diff = m.second * (m.second - 1) / 2;
		ans -= diff;
    }

    cout << ans << endl;

    return 0;
}

