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
    int N = 0, M = 0;


    cin >> N >> M;


    vector<int> A(M);
    vector<char> B(M);
    vector<int> M_count(N + 1, 0);

    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
    }


    for (int i = 0; i < M; i++) {
        if (B[i] == 'M') {
            M_count[A[i]]++;

            if (M_count[A[i]] == 1) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}

