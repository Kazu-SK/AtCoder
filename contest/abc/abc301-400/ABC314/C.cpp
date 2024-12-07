
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

    vector<char> S(N);
    vector<int> C(N);
    map<int, vector<char>> Color;
    map<int, vector<int>> pos;

    for (int i = 0; i < N; i++)
        cin >> S[i];

    for (int i = 0; i < N; i++) {
        cin >> C[i];

        Color[C[i]].push_back(S[i]);
        pos[C[i]].push_back(i);
    }

    for (int m = 1; m <= M; m++) {

        char s = Color[m][Color[m].size() - 1];

        Color[m].insert(Color[m].begin(), s);
        Color[m].pop_back();

        for (int j = 0; j < pos[m].size(); j++) {
            S[pos[m][j]] = Color[m][j];
        }
    }

    for (int i = 0; i < N; i++)
        cout << S[i];

    return 0;
}

