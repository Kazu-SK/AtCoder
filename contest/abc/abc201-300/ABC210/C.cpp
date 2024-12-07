
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
    map<int, int> Map;


    cin >> N >> K;


    vector<int> C(N);

    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }


    for (int i = 0; i < K; i++) {
        Map[C[i]]++;
    }

    int ans = Map.size();

    //cout << "Map.size() = " << Map.size() << endl;
    //cout << "ans = " << ans << endl;

    for (int i = K; i < N; i++) {

        Map[C[i - K]]--;
        Map[C[i]]++;

        if (Map[C[i - K]] == 0)
            Map.erase(C[i - K]);

        //cout << "Map.size() = " << Map.size() << endl;

        int kind_size = Map.size();

        ans = max(ans, kind_size);

        //cout << "ans = " << ans << endl;
    }

    cout << ans << endl;

    return 0;
}

