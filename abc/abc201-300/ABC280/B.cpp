
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;

    cin >> N;

    vector<LL> S(N);
    bool judge = true;

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }


    for (int i = 0; i < N; i++) {


        if (i != 0) {

            LL diff = S[i] - S[i - 1];

            cout << diff << " ";
        }
        else {

            cout << S[i] << " ";
        }
    }

    return 0;
}

