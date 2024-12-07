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
    int N = 0, T = 0;
    map<int, bool> Masu;


    cin >> N >> T;

    vector<int> A(T);

    for (int i = 0; i < T; i++) {
        cin >> A[i];

        A[i]--;
    }


    int ans = -1;

    vector<int> row(N);
    vector<int> col(N);
    vector<int> diag(2);

    for (int i = 0; i < T; i++) {

        int x = A[i] / N;
        int y = A[i] % N;

        row[x]++;
        col[y]++;

        if (row[x] == N) {
            ans = i + 1;
            break;
        }

        if (col[y] == N) {
            ans = i + 1;
            break;
        }

        if (x == y) {
            diag[0]++;

            if (diag[0] == N) {
                ans = i + 1;
                break;
            }
        }

        if (x + y == N - 1) {
            diag[1]++;

            if (diag[1] == N) {
                ans = i + 1;
                break;
            }
        }

    }

    cout << ans << endl;

    return 0;
}

