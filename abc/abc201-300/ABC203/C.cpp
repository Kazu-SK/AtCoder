
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
    LL N = 0, K = 0;


    cin >> N >> K;


    typedef struct{
        LL A;
        LL B;
    }Friends;


    vector<Friends> F(N);


    for (int i = 0; i < N; i++) {
        cin >> F[i].A >> F[i].B;
    }

    sort(F.begin(), F.end(), [&](const auto& l, const auto& r) {
        return l.A < r.A;
    });

    int f_num = 0;
    LL ans = 0;

    for(int f_num = 0 ; f_num < N ; f_num++){

        if (K - (F[f_num].A - ans) < 0) {
            ans += K;
            cout << ans << endl;
            return 0;
        }

        K -= F[f_num].A - ans;
        K += F[f_num].B;

        if (f_num < N - 1) {
			while (F[f_num].A == F[f_num + 1].A) {
				f_num++;
				K += F[f_num].B;

				if (f_num == N - 1)
					break;
			}
        }

        ans = F[f_num].A;

        //cout << K << endl;
    }

    ans += K;
    cout << ans << endl;

    return 0;
}

