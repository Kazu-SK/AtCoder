
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, X = 0;


    cin >> N >> X;

    vector<int> P(N);

    for (int i = 0; i < N; i++)
        cin >> P[i];

    for (int i = 0; i < N; i++) {
        if (P[i] == X)
            cout << i + 1 << endl;
    }

    return 0;
}

