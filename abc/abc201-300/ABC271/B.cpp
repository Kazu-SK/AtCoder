
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, Q = 0;


    cin >> N >> Q;

    vector<int> L(N);
    vector<vector<int>> a(N);
    vector<int> s(Q);
    vector<int> t(Q);

    for (int i = 0; i < N; i++) {
        cin >> L[i];

        for (int j = 0; j < L[i]; j++) {
            int num;

            cin >> num;
            a[i].push_back(num);
        }
    }

    for (int i = 0; i < Q; i++) {
        cin >> s[i] >> t[i];
    }

    for (int i = 0; i < Q; i++) {
        s[i] -= 1;
        t[i] -= 1;

        cout << a[s[i]][t[i]] << endl;;
    }

    return 0;
}

