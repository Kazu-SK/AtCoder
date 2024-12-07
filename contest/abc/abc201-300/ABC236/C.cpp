
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


    vector<string> S(N);
    vector<string> T(M);

    map<string, bool> Map;

    for (int i = 0; i < N; i++) {
        cin >> S[i];

        Map[S[i]] = false;
    }

    for (int i = 0; i < M; i++) {
        cin >> T[i];

        Map[T[i]] = true;
    }

    for (int i = 0; i < N; i++) {

        if (Map[S[i]] == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }



    return 0;
}

