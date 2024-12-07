
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


    vector<string> S(N);
    vector<int> T(N);
    map<string, int> Original_T;
    map<string, int> Original_i;


    for (int i = 0; i < N; i++) {
        cin >> S[i] >> T[i];

        if (Original_T[S[i]] == 0) {
            Original_T[S[i]] = T[i];
            Original_i[S[i]] = i + 1;
        }
    }

    int ans_i = 0;
    int ans_T = 0;
    string ans_S;

    for (auto p : Original_T) {

        if (p.second > ans_T) {
            ans_i = Original_i[p.first];
            ans_T = p.second;
            ans_S = p.first;
        }
        else {
            if (p.second == ans_T && Original_i[p.first] < ans_i) {
				ans_i = Original_i[p.first];
				ans_T = p.second;
                ans_S = p.first;
            }
        }
    }

    cout << ans_i << endl;
    //cout << ans_T << endl;
    //cout << ans_S << endl;

    return 0;
}

