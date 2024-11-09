#include <iostream>
#include <vector>

using namespace std;


int main()
{

    int D = 0, N = 0;


    cin >> D >> N;

    vector<int> L(N + 1, 0);
    vector<int> R(N + 1, 0);
    vector<int> human(D + 2, 0);
    vector<int> ans(D + 2, 0);


    for (int i = 1; i <= N; i++) {
        cin >> L[i] >> R[i];

        human[L[i]] += 1;
        human[R[i] + 1] -= 1;
    }

    for (int i = 1; i <= D; i++) {
        ans[i] = human[i] + ans[i - 1];
    }

    for (int i = 1; i <= D; i++) {
        cout << ans[i] << endl;
    }


    return 0;
}
