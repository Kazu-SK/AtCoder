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
    int N = 0;


    cin >> N;

    vector<int> a(N);
    int sum = 0;


    for (int i = 0; i < N; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum % 100 << endl;

    return 0;
}

