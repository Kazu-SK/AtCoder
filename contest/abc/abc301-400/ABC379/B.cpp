
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

    cin >> N >> K;

    vector<char> S(N);

    for (int i = 0; i < N; i++)
        cin >> S[i];


    int renzoku_o = 0;
    int ans = 0;

    for (int i = 0; i < N; i++) {

        if (S[i] == 'O') {
            renzoku_o++;

			if (renzoku_o == K) {
				renzoku_o = 0;
				ans++;
			}
        }
        else {
            renzoku_o = 0;
        }
    }

    cout << ans << endl;

    return 0;
}

