
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
    map<int, int> Map;
    map<int, int> ans;
    map<int, int> kind_memo;

    cin >> N;

    vector<int> nA;
    vector<int> sA;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        nA.push_back(num);

        if (Map[num] == 0) {
            Map[num]++;
            sA.push_back(num);
        }

        kind_memo[num] = -1;
    }

    sort(sA.begin(), sA.end());

    for (int i = 0; i < nA.size(); i++) {

        int pos = 0;
        int kind = 0;

		if (kind_memo[nA[i]] == -1) {
			pos = lower_bound(sA.begin(), sA.end(), nA[i]) - sA.begin();
			kind = sA.size() - pos - 1;
			ans[kind]++;

            kind_memo[nA[i]] = kind;
		}
        else {
            ans[kind_memo[nA[i]]]++;
        }
    }

    for (int k = 0; k < N; k++) {
        cout << ans[k] << endl;
    }

    return 0;
}

