#include <iostream>
#include <vector>


using namespace std;

enum Class_num {
    CLASS_1 = 0,
    CLASS_2,
    CLASS_NUM
};

int main()
{
    int N = 0;
    int Q = 0;

    cin >> N;


    int offset = 1;
    vector<int> C(N + offset, 0);
    vector<int> P(N + offset, 0);
    vector<vector<int>> C_P_sum(3, vector<int>(N + offset, 0));
    int conv_class_num = 0;

    for (int i = 1; i <= N; i++) {
        cin >> C[i];
        cin >> P[i];

        conv_class_num = C[i] - 1;
        C_P_sum[conv_class_num][i] = C_P_sum[conv_class_num][i - 1] + P[i];

        if (conv_class_num == CLASS_1) {
            C_P_sum[CLASS_2][i] = C_P_sum[CLASS_2][i - 1];
        }

        if (conv_class_num == CLASS_2) {
            C_P_sum[CLASS_1][i] = C_P_sum[CLASS_1][i - 1];
        }
    }

    cin >> Q;

    vector<int> L(Q, 0);
    vector<int> R(Q, 0);

    for (int i = 0; i < Q; i++)
        cin >> L[i] >> R[i];

    for (int i = 0; i < Q; i++) {

        for (int class_num = CLASS_1; class_num < CLASS_NUM; class_num++) {
            cout << C_P_sum[class_num][R[i]] - C_P_sum[class_num][L[i] - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}

