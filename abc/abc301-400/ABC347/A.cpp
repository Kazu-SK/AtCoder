#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0, K = 0;


    cin >> N >> K;

    vector<int> A(N);

    for (int i = 0; i < A.size(); i++)
        cin >> A[i];


    vector<int> ans;

    for (int i = 0; i < A.size(); i++) {

        if (A[i] % K == 0) {
            ans.push_back(A[i] / K);
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}

