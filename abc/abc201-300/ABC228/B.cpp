
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
    int N = 0, X = 0;


    cin >> N >> X;

    vector<int> A(N + 1);
    map<int, bool> Map;

    for (int i = 1; i <= N; i++)
        cin >> A[i];

    int ans = 0;

    while (true) {

        if (Map[X] == false) {
            Map[X] = true;
        }
        else {
            break;
        }

        X = A[X];
        ans++;
    }

    cout << ans << endl;

    return 0;
}

