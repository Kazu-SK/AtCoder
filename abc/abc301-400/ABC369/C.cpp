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


    cin >> N;


    vector<LL> A(N);


    for (int i = 0; i < N; i++)
        cin >> A[i];

    LL ans = A.size();// +(A.size() - 1);

    int right = 0;
    int left = 0;
    LL diff = 0;
    LL num = 0;

    while (right < N - 1) {

        right++;

        left = right - 1;

        diff = A[right] - A[left];

        while (right < N - 1 && A[right + 1] - A[right] == diff) {
            right++;
        }

        LL num = right - left + 1;

        ans += num * (num - 1) / 2;

    }

    cout << ans << endl;

    return 0;
}

