
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
    LL X = 0;

    cin >> N >> X;

    vector<LL> A(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];


    sort(A.begin(), A.end());


    for (int i = 0; i < N; i++) {

        LL search_num = A[i] + X;

        int pos = lower_bound(A.begin(), A.end(), search_num) - A.begin();

        if (pos < N && A[pos] == search_num) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;


    return 0;
}


