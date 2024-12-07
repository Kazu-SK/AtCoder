#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int N = 0, M = 0, K = 0;


    cin >> N >> M >> K;

    vector<vector<int>> A(M);
    vector<int> C(M);
    vector<char> R(M);


    for (int i = 0; i < M; i++) {
        cin >> C[i];

        for (int j = 0; j < C[i]; j++) {
            int A_C = 0;

            cin >> A_C;

            A[i].push_back(A_C);
        }

        cin >> R[i];
    }

    //const int DUMMY = 1;
    //const int GENUINE = 0;

    int combi_num = 0;
    vector<int> genuine;

    for (int combi = 0; combi < (1 << N); combi++) {


        for (int j = 0; j < N; j++) {

            if (combi & (1 << j)) {

                genuine.push_back(j + 1);
            }
        }


        int ok = 0;
        for (int i = 0; i < M; i++) {

            int genuine_count = 0;

            for (int j = 0; j < A[i].size(); j++) {
                for (int z = 0; z < genuine.size(); z++) {
                    if (A[i][j] == genuine[z])
                        genuine_count++;
                }
            }

            if ((genuine_count >= K && R[i] == 'o') || (genuine_count < K && R[i] == 'x')) {
                ok++;
            }
            else {
                break;
            }
        }

        if (ok == M) {
            combi_num++;
        }

        genuine.clear();
    }

    cout << combi_num << endl;

    return 0;
}

