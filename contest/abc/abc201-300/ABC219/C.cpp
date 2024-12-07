
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    string abc = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> Map_abc;
    map<char, char> abc_to_X;



    string X;
    int N = 0;


    cin >> X;
    cin >> N;

    for (int i = 0; i < X.size(); i++) {
        Map_abc[X[i]] = i;
        abc_to_X[abc[i]] = X[i];
    }

    vector<string> S(N);

    for (int i = 0; i < N; i++)
        cin >> S[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < S[i].size(); j++) {
            S[i][j] = abc[Map_abc[S[i][j]]];
        }
    }

    sort(S.begin(), S.end());

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < S[i].size(); j++) {
            S[i][j] = abc_to_X[S[i][j]];
        }

        cout << S[i] << endl;
    }



    return 0;
}

