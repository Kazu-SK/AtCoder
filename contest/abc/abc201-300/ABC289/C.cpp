
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
    int N = 0, M = 0;


    cin >> N >> M;

    vector<vector<int>> a(M);
    vector<int> C(M);

    for (int i = 0; i < M; i++) {
        cin >> C[i];

        for (int j = 0; j < C[i]; j++) {
            int num;

            cin >> num;

            a[i].push_back(num);
        }
    }

    int ans = 0;

    for (int m = 0 ; m < (1 << M); m++) {

        set<int> s;
        
        for (int bit = 0; bit < M; bit++) {

            if (m & (1 << bit)) {
                for (int a_itr = 0; a_itr < a[bit].size(); a_itr++) {
                    s.insert(a[bit][a_itr]);
                }
            }
        }

        if (s.size() == N) {
            ans++;
        }

        s.clear();
    }

    cout << ans << endl;

    return 0;
}

