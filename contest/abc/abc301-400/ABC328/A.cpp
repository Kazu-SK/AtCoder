#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0, X = 0;

    cin >> N >> X;


    vector<int> A(N, 0);

    int ans_sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i];

        if (A[i] <= X)
            ans_sum += A[i];
    }

    cout << ans_sum << endl;

    return 0;
}

