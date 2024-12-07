
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


    vector<int> A(N + 1);
    vector<int> B(N + 1);

    map<int, int> Map;


    for (int i = 1; i <= N; i++) {
        cin >> A[i];

    }


    B[1] = -1;

    for (int i = 2; i <= N; i++) {
        Map[A[i - 1]] = i - 1;
        
        if (Map[A[i]] == 0) {
            B[i] = -1;
        }
        else {
            B[i] = Map[A[i]];
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << B[i] << " ";
    }


    return 0;
}

