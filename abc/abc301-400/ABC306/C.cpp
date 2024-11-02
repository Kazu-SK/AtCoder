
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

    vector<int> A(N * 3 + 1, 0);
    vector<int> ans;
    map<int, int> Map;
    map<int, int> Ans;

    for (int i = 1; i <= N * 3; i++) {
        cin >> A[i];

        Map[A[i]]++;

        if (Map[A[i]] == 2) {
            ans.push_back(i);
            Ans[ans[ans.size() - 1]] = A[i];
        }
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
        cout << Ans[ans[i]] << " ";
    }
    cout << endl;

    return 0;
}

