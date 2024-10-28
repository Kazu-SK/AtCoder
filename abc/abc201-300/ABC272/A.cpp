
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N);
    int answer = 0;


    for (int i = 0; i < N; i++) {
        cin >> A[i];
        answer += A[i];
    }

    cout << answer << endl;

    return 0;
}

