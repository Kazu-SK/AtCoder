
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> H(N);

    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int answer = 0;
    int Highst = 0;

    for (int i = 0; i < N; i++) {

        if (Highst < H[i]) {
            Highst = H[i];
            answer = i + 1;
        }
    }

    cout << answer << endl;

    return 0;
}

