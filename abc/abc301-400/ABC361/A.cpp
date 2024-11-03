
#include <iostream>
#include <vector>


using namespace std;

int main()
{
        
    int N = 0;
    int K = 0;
    int X = 0;


    cin >> N >> K >> X;

    vector<int> A(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    auto it = A.begin();

    A.insert(it + K + 1, X);

    for (int i = 1; i < A.size(); i++) {
        cout << A[i] << " ";
    }


    return 0;
}

