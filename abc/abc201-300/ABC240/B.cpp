
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
    set<int> s;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        s.insert(A[i]);
    }

    cout << s.size() << endl;


    return 0;
}

