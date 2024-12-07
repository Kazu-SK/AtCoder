
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int alice_itr = N - 1;
    int bob_itr = N - 2;
    int alice_sum = 0;
    int bob_sum = 0;

    while (alice_itr >= 0) {

        if (alice_itr == 0) {
			alice_sum += a[alice_itr];
        }
        else {
			alice_sum += a[alice_itr];
			bob_sum += a[bob_itr];
        }

        alice_itr -= 2;
        bob_itr -= 2;
    }

    cout << alice_sum - bob_sum << endl;

    return 0;
}

