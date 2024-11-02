#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{

    int N = 0;


    cin >> N;


    vector<int> A(N, 0);


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int max_num = A[A.size() - 1];

    for (int i = A.size() - 1; i >= 0; i--) {

        if (A[i] < max_num) {
            cout << A[i] << endl;
            break;
        }
    }


    return 0;
}

