#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int N = 0;
    int L = 0;
    int ans = 0;

    cin >> N >> L;


    vector<int> A(N, 0);


    for (int i = 0; i < N; i++) {
        cin >> A[i];

        if (A[i] >= L)
            ans++;
    }


    cout << ans << endl;

    return 0;
}

