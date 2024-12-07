
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


    vector<int> A(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int nuts = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] > 10) {
            nuts += A[i] - 10;
        }
    }

    cout << nuts << endl;

    return 0;
}

