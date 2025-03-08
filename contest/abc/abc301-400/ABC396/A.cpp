#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using llong = long long;

int main()
{
    int N = 0;
    int counter = 1;
    bool judge = false;


    cin >> N;

    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 1; i < N; i++) {
        if (A[i - 1] == A[i])
            counter++;
        else
            counter = 1;

        if (counter == 3) {
            judge = true;
        }
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

