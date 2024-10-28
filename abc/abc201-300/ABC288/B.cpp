#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, K = 0;


    cin >> N >> K;

    vector<string> S(N);
    vector<string> SK;


    for (int i = 0; i < N; i++) {
        cin >> S[i];

        if (i < K) {
            SK.push_back(S[i]);
        }
    }

    sort(SK.begin(), SK.end());

    for (int i = 0; i < K; i++) {
        cout << SK[i] << endl;
    }

    return 0;
}

