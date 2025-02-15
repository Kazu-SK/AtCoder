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

struct Info {
    int P;
    int Q;
};

int main()
{
    int N = 0;


    cin >> N;

    vector<Info> info(N + 1);
    map<int, int> Map;

    for (int i = 1; i <= N; i++)
        cin >> info[i].P;

    for (int i = 1; i <= N; i++)
        cin >> info[i].Q;

    for (int i = 1; i <= N; i++) {
        Map[i] = info[i].Q;
    }

    sort(info.begin(), info.end(), [&](const auto& l, const auto& r) {
        return l.Q < r.Q;
	});

    for (int i = 1; i <= N; i++) {
        cout << Map[info[i].P] << " ";
    }

    return 0;
}

