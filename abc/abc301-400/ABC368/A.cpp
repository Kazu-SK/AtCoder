#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

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

    for (int i = 0; i < K; i++) {
        int pop_num = 0;

        pop_num = A[N - 1];

        A.pop_back();

        A.insert(A.begin(), pop_num);
    }


    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}

