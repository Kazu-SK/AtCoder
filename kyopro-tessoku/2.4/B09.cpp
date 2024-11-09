#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N = 0;

    cin >> N;


    vector<int> A(N, 0);
    vector<int> B(N, 0);
    vector<int> C(N, 0);
    vector<int> D(N, 0);

    int c_range = 1500;
    vector<vector<int>> masu(c_range + 2, vector<int>(c_range + 2, 0));
    vector<vector<int>> r_sum(c_range + 2, vector<int>(c_range + 2, 0));
    vector<vector<int>> all_sum(c_range + 2, vector<int>(c_range + 2, 0));


    int offset = 1;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];

        masu[A[i] + offset][B[i] + offset] += 1;
        masu[C[i] + offset][D[i] + offset] += 1;
        masu[A[i] + offset][D[i] + offset] -= 1;
        masu[C[i] + offset][B[i] + offset] -= 1;
    }

    for (int raw = 1; raw <= c_range; raw++) {
        for (int col = 1; col <= c_range; col++) {
            r_sum[raw][col] = masu[raw][col] + r_sum[raw][col - 1];
        }
    }

    int answer = 0;

    for (int col = 1; col <= c_range; col++) {
        for (int raw = 1; raw <= c_range; raw++) {
            all_sum[raw][col] = r_sum[raw][col] + all_sum[raw - 1][col];
            if (all_sum[raw][col] >= 1)
                answer++;
        }
    }

    cout << answer << endl;

    return 0;
}

