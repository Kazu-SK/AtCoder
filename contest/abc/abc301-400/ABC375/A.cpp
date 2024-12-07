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


    cin >> N;

    vector<char> S(N);

    for (int i = 0; i < N; i++)
        cin >> S[i];

    string s;
    int ans = 0;

    for (int i = 0; i < N - 2; i++) {

        for (int j = i; j < i + 3; j++) {
            s += S[j];

            if (s == "#.#") {
                ans++;
            }
        }
        s = "";
    }

    cout << ans << endl;

    return 0;
}

