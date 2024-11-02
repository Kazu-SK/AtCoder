
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N);


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> ans;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            ans.push_back(A[i]);
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

