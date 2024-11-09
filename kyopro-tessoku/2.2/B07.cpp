#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T = 0, N = 0;


    cin >> T >> N;

    vector<int> L(N + 1, 0);
    vector<int> R(N + 1, 0);
    vector<int> human(T + 1, 0);
    vector<int> ans(T, 0);


    for (int i = 1; i <= N; i++) {
        cin >> L[i] >> R[i];

        human[L[i]] += 1;
        human[R[i]] -= 1;
    }


    for (int t = 0; t <= T - 1; t++) {

        if (t == 0) {
            ans[t] = human[t];
        }
        else {
            ans[t] = ans[t - 1] + human[t];
        }

        cout << ans[t] << endl;
    }




    return 0;
}

