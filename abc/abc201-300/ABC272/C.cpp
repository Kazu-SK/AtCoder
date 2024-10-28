
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


    vector<LL> A(N, 0);
    vector<LL> odd;
    vector<LL> even;


    for (int i = 0; i < N; i++) {
        cin >> A[i];

        if (A[i] % 2 == 0)
            even.push_back(A[i]);
        else
            odd.push_back(A[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int even_last_itr = even.size() - 1;
    int odd_last_itr = odd.size() - 1;
    LL ans = 0;
    bool judge = false;

    if (even_last_itr > 0) {
        ans = max(ans,even[even_last_itr] + even[even_last_itr - 1]);
        judge = true;
    }

    if (odd_last_itr > 0) {
        ans = max(ans,odd[odd_last_itr] + odd[odd_last_itr - 1]);
        judge = true;
    }

    if (judge) {
        cout << ans << endl;
    }
    else {
        cout << -1 << endl;
    }


    return 0;
}

