#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int N, M;


    cin >> N >> M;

    vector<int> A(M + 1);
    vector<int> X;

    for (int i = 1; i <= M; i++)
        cin >> A[i];

    sort(A.begin(), A.end());

    int A_itr = 1;
    for (int n = 1; n <= N; n++) {
        if (A[A_itr] == n) {

            if(A_itr < M)
				A_itr++;
        }
        else {
            X.push_back(n);
        }
    }

    cout << X.size() << endl;

    for (int i = 0; i < X.size(); i++)
        cout << X[i] << " ";

    return 0;
}

