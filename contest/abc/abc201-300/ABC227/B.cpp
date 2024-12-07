
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


    vector<int> S(N);

    for (int i = 0; i < N; i++)
        cin >> S[i];

    int S_num = 0;
    int ans = 0;

    for (int i = 0; i < S.size(); i++) {

        bool judge = false;

        for (int a = 1; a <= 143; a++) {
            for (int b = 1; b <= 143; b++) {
                S_num = 4 * a * b + 3 * a + 3 * b;
                //cout << S_num << endl;

                if (S_num == S[i]) {
                   // cout << S_num << endl;
                    judge = true;
                }
            }
        }
        //cout << endl;

        if (judge == false) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

