
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

    vector<int> a(N);
    vector<int> b(N);

    map<int, int> Map_t;
    map<pair<int, int>, int> Map_p;


    bool judge = false;

    for (int i = 1; i < N; i++) {
        cin >> a[i] >> b[i];


        if (Map_p[make_pair(a[i], b[i])] == false && Map_p[make_pair(b[i], a[i])] == false) {
			Map_t[a[i]]++;
			Map_t[b[i]]++;

            Map_p[make_pair(a[i], b[i])] = true;
            Map_p[make_pair(b[i], a[i])] = true;

            if (Map_t[a[i]] == N - 1)judge = true;
            if (Map_t[b[i]] == N - 1)judge = true;
        }
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;



    return 0;
}

