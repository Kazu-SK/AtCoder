
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>
#include <string>

using namespace std;
using LL = long long;

LL StoLL(string S) {

    LL ans = 0;
    LL num = 1;

    for (int i = S.size() - 1; i >= 0; i--) {
        ans += (S[i] - '0') * num;
        num *= 10;
    }

    return ans;
}

int main()
{
    string N;


    cin >> N;

    sort(N.begin(), N.end());

    string s_num[2];
    LL i_num[2];
    LL ans = 0;

    do {

        for (int i = 0; i < N.size() - 1; i++){
            for (int j = 0; j < N.size(); j++) {

                if (j <= i) {
                    s_num[0] += N[j];
                }
                else {
                    s_num[1] += N[j];
                }
            }

            i_num[0] = StoLL(s_num[0]);
            i_num[1] = StoLL(s_num[1]);

            //cout << i_num[0] << " " << i_num[1] << endl;

            ans = max(ans, i_num[0] * i_num[1]);

            s_num[0] = "";
            s_num[1] = "";
        }
        //break;

    } while (next_permutation(N.begin(), N.end()));

    cout << ans << endl;

    return 0;
}

