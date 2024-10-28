
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0; 
    int K = 0;


    cin >> N >> K;

    vector<int> A(N);


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }


    for (int i = 0; i < K; i++) {
        //A.insert(A.begin(), 1);
        A.erase(A.begin());
        A.push_back(0);
    }


    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }


    return 0;
}

