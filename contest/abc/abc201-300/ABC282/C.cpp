
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

    vector<char> S(N);


    for (int i = 0; i < N; i++)
        cin >> S[i];


    int dq_count = 0;

    for (int i = 0; i < N; i++) {

        if (S[i] == '"') {
            dq_count++;
        }

        if (dq_count % 2 == 0 && S[i] == ',') {
            S[i] = '.';
        }
    }


    for (int i = 0; i < N; i++)
        cout << S[i];

    return 0;
}

