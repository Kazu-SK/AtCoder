
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> L(N);
    vector<vector<LL>> a(N);
    set <vector<LL>> s;

    for (int i = 0; i < N; i++) {

        cin >> L[i];

        for (int j = 0; j < L[i]; j++) {
            LL num = 0;

            cin >> num;
            a[i].push_back(num);
        }

    }

    for (int i = 0; i < N; i++) {
        s.insert(a[i]);
    }

    cout << s.size() << endl;

    return 0;
}

