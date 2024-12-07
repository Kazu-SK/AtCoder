
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int Q = 0;


    cin >> Q;

    vector<int> query_kinds(Q + 1, 0);
    vector<int> query_num(Q + 1, 0);
    vector<int> A;

    const int KINDS_1X = 1;
    const int KINDS_2K = 2;


    for (int i = 1; i <= Q; i++) {
        cin >> query_kinds[i] >> query_num[i];
    }

    for (int i = 1; i <= Q; i++) {
        if (query_kinds[i] == KINDS_1X) {
            A.insert(A.begin(), query_num[i]);
        }

        if (query_kinds[i] == KINDS_2K) {
            cout << A[query_num[i] - 1] << endl;
        }
    }

    return 0;
}

