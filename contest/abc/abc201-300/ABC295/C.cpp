
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
    map<int, int> Color_count;


    cin >> N;


    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        Color_count[A[i]]++;
    }


    int ans_count = 0;

    for (auto p : Color_count) {

        if (p.second >= 2) {
            ans_count += p.second / 2;
        }
    }

    cout << ans_count << endl;

    return 0;
}

