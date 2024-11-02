
/*************************************************
二次元の累積和 (座標入力)
1枚以上のシートによって覆われている領域を求める。
**************************************************/

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

    int c_range = 102; //A,B,C,Dには0～100まで入力可能  0～100入力分(101) + OFFSET分(1)
    vector<vector<int>> masu(c_range, vector<int>(c_range, 0));
    vector<vector<int>> r_sum(c_range, vector<int>(c_range, 0));
    vector<vector<int>> all_sum(c_range, vector<int>(c_range, 0));


    const int OFFSET = 1; //xまたはyが0となる座標について、r_sum, all_sumの値が算出できるようにするため、x,yをOFFSET(1)分,実際のABCD入力値からずらす。
    
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];        // i枚目のシートが満たす領域　A[i] <= X <= B[i] , C[i] <= Y <= D[i]

        masu[A[i] + OFFSET][C[i] + OFFSET] += 1;
        masu[B[i] + OFFSET][D[i] + OFFSET] += 1;

        masu[A[i] + OFFSET][D[i] + OFFSET] -= 1;
        masu[B[i] + OFFSET][C[i] + OFFSET] -= 1;
    }

    for (int raw = 0; raw < c_range; raw++) {
        for (int col = 1; col < c_range; col++) {
            r_sum[raw][col] = masu[raw][col] + r_sum[raw][col - 1];
        }
    }


    for (int col = 0; col < c_range; col++) {
        for (int raw = 1; raw < c_range; raw++) {
            all_sum[raw][col] = r_sum[raw][col] + all_sum[raw - 1][col];
        }
    }

    int answer = 0;
    for (int col = 0; col < c_range; col++) {
        for (int raw = 0; raw < c_range; raw++) {
            if (all_sum[raw][col] >= 1)
                answer++;
        }
    }

    cout << answer << endl;

    return 0;
}

