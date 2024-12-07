
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
    int N = 0;
    int K = 0;
    int L = 0;

    cin >> N >> L;
    cin >> K;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int left = -1;
    int right = L + 1;

    while (right - left > 1) {
        int mid = left + (right - left) / 2;
        int pre = 0;
        int cnt = 0;

        for (int i = 0; i < A.size(); i++) {
            if (A[i] - pre >= mid && L - A[i] >= mid) {
                cnt++;
                pre = A[i];
            }
        }

        if (cnt >= K) left = mid;
        else right = mid;
    }

    cout << left << endl;

    return 0;
}

