#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N + 1, 0);


    int sum = 0;
    for (int i = 1; i < N; i++) {

        cin >> A[i];
        sum += A[i];
    }


    A[N] = 0 - sum;

    cout << A[N] << endl;

    return 0;
}

