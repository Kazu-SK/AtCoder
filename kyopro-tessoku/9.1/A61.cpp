#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{

    int N = 0, M = 0;


    cin >> N >> M;


    const int offset = 1;
    vector<int> A(M + offset);// , vector<int>(M + offset, 0));
    vector<int> B(M + offset);// , vector<int>(M + offset, 0));
    vector<vector<int>> combinate(N + offset);// , vector<int>(M + offset, 0));

    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
    }

    for (int i = 1; i <= M; i++) {
        combinate[A[i]].push_back(B[i]);
        combinate[B[i]].push_back(A[i]);
    }

    for (int k = 1; k <= N; k++) {
        cout << k << ": {";

        sort(combinate[k].begin(), combinate[k].end());

        for (int i = 0; i < combinate[k].size(); i++) {

            if (i != combinate[k].size() - 1)
                cout << combinate[k][i] << ", ";
            else
                cout << combinate[k][i];
        }

        cout << "}" << endl;
    }

    return 0;
}

