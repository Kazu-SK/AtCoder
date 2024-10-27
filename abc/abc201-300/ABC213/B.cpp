
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
    map<int, int> Map;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        Map[A[i]] = i + 1;
    }

    sort(A.begin(), A.end());

    cout << Map[A[A.size() - 2]] << endl;


    return 0;
}

