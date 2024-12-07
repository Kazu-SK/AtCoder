
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

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());


    bool judge = true;

    int num = 1;

    for (int i = 0; i < N; i++) {
        if (A[i] != num) {
            judge = false;
            break;
        }

        num++;
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

