
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


    map<string, int> Map;


    cin >> N;

    vector<string> S(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i];

        Map[S[i]]++;
    }

    string ans_S;
    int max_num = 0;

    for (int i = 0; i < N; i++) {

        if (max_num < Map[S[i]]) {
            max_num = Map[S[i]];
            ans_S = S[i];
        }
    }

    cout << ans_S << endl;

    return 0;
}

