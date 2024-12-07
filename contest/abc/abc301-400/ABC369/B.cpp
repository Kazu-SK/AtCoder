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

    vector<int> A(N);
    vector<char> S(N);

    vector<int> A_L;
    vector<int> A_R;

    int ans = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        cin >> S[i];

        if (S[i] == 'L')A_L.push_back(A[i]);
        if (S[i] == 'R')A_R.push_back(A[i]);
    }

    for (int i = 1; i < A_L.size(); i++) {
        ans += abs(A_L[i] - A_L[i - 1]);
    }

    for (int i = 1; i < A_R.size(); i++) {
        ans += abs(A_R[i] - A_R[i - 1]);
    }

    cout << ans << endl;

    return 0;
}

