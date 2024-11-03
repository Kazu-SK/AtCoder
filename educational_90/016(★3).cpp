#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;
    vector<int> ABC(3);


    cin >> N;

    for (int i = 0; i < 3; i++) {
        cin >> ABC[i];
    }

    LL ans_count = 1e18;

    for (int a = 0; a <= 9999; a++) {
        for (int b = 0; b <= 9999 - a; b++) {

            LL value = (LL)a * ABC[0] + (LL)b * ABC[1];

            if (N < value || (N - value) % ABC[2] != 0)
                continue;

            ans_count = min(ans_count, a + b + (N - value) / ABC[2]);

        }
    }

    cout << ans_count << endl;

    return 0;
}
