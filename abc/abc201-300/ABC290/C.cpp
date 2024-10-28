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
    int N = 0, K = 0;


    cin >> N >> K;

    vector<int> A(N);


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int num = 0;
    //int ans = 0;
    int count = 0;
    int i = 0;

    while (true) {

        count = 0;

        while (A[i] == num && num < K) {
            i++;
            count++;
        }

        if (num == K || count == 0) {
            break;
        }

        num++;
    }

    cout << num << endl;

    return 0;
}

