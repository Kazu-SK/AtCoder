
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

    vector<int> A(4 * N - 1, 0);
    vector<int> count(N + 1, 0);


    for (int i = 0; i < 4 * N - 1; i++) {
        cin >> A[i];

        count[A[i]]++;
    }


    for (int a = 1; a <= N; a++) {
        if (count[a] == 3) {
            cout << a << endl;
            break;
        }
        //cout << a << " = " << count[a] << endl;
    }

    return 0;
}

