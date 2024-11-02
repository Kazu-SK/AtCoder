#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0;
    int M = 0;
    int L = 0;
    int Q = 0;

    cin >> N;
    vector<int> A(N, 0);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> M;
    vector<int> B(M, 0);

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    cin >> L;
    vector<int> C(L, 0);

    for (int i = 0; i < L; i++) {
        cin >> C[i];
    }

    cin >> Q;
    vector<int> X(Q, 0);

    for (int i = 0; i < Q; i++) {
        cin >> X[i];
    }

    vector<int> AB(N * M, 0);
    int AB_itr = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            AB[AB_itr] = A[i] + B[j];
            AB_itr++;
        }
    }

    sort(AB.begin(), AB.end());

    int search_num = 0;
    bool answer = false;
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < L; j++) {
            search_num = X[i] - C[j];

            int pos1 = N * M;
            pos1 = lower_bound(AB.begin(), AB.end(), search_num) - AB.begin();

            if (pos1 < N * M && AB[pos1] == X[i] - C[j]) {
                answer = true;
                //break;
            }
        }

        if (answer == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        answer = false;
    }


    return 0;
}

