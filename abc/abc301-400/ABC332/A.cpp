
#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main()
{

    int N = 0; 
    int S = 0;
    int K = 0;

    cin >> N >> S >> K;

    vector<int> P(N, 0);
    vector<int> Q(N, 0);
    ll sum = 0;


    for (int i = 0; i < N; i++) {
        cin >> P[i] >> Q[i];

        sum += (ll)P[i] * Q[i];
    }


    if (sum < S) {
        sum += K;
    }

    cout << sum << endl;

    return 0;
}
