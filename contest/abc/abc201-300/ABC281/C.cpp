
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
    int N;
    LL T;
    LL found_T;


    cin >> N >> T;


    vector<LL> A(N + 1);
    vector<LL> sum_A(N + 1, 0);


    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        sum_A[i] = A[i] + sum_A[i - 1];
    }

    if (T == sum_A[N]) {
        found_T = sum_A[N];
    }
    else {
        found_T = T % sum_A[N];
    }

    int pos = lower_bound(sum_A.begin(), sum_A.end(), found_T) - sum_A.begin();
    int ans_pos = 0;
    int ans_T = 0;

    if(pos >= 1 && pos <= N){
        ans_pos = pos;
    }
    else {
        ans_pos = N;
    }

    ans_T = found_T - sum_A[ans_pos - 1];

    cout << ans_pos << " " << ans_T << endl;

    return 0;
}

