﻿
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
    int N = 0, P = 0;


    cin >> N;
    cin >> P;


    vector<int> A(N);


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int ans = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] < P) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

