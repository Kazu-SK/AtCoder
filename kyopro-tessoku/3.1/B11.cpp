#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int BinarySearch(vector<int> A, int search_num) {


    int L = 1;
    int R = A.size() - 1;
    int M = (L + R) / 2;
    int answer = 0;

    //cout << "L = " << L << endl;;
    //cout << "R = " << R << endl;;

    while (L <= R) {

        if (A[M] == search_num) {
            return M - 1;
        }

        if (A[M] > search_num) {
            R = M - 1;
        }

        if (A[M] < search_num) {
            L = M + 1;
        }

        M = (L + R) / 2;

        /*
        cout << "L = " << L << endl;
        cout << "R = " << R << endl;
        cout << "M = " << M << endl;
        */
    }

    return R;
}

int main()
{
    int N = 0;
    int Q = 0;


    cin >> N;
    vector<int> A(N + 1, 0);


    for (int i = 1; i <= N; i++)
        cin >> A[i];

    cin >> Q;
    vector<int> X(Q + 1, 0);

    for (int i = 1; i <= Q; i++)
        cin >> X[i];


    sort(A.begin(), A.end());

    for (int i = 1; i <= Q; i++) {
        cout << BinarySearch(A, X[i]) << endl;
    }

    return 0;
}

