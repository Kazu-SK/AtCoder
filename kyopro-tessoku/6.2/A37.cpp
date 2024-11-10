#include <iostream>
#include <vector>

using namespace std;


//int A[2000009];
//int C[2000009];

int main()
{
    int N = 0; //intにしたら不正解
    int M = 0;
    int B = 0;


    cin >> N >> M >> B;

    vector<int> A(N + 1, 0);
    vector<int> C(M + 1, 0);


    for (int i = 1; i <= N; i++)cin >> A[i];
    for (int j = 1; j <= M; j++)cin >> C[j];

    //答えの計算
    long long calc_sum_time = 0;
    for (int i = 1; i <= N; i++)calc_sum_time += A[i] * M;
    calc_sum_time += (long long)B * N * M; //桁あふれ注意
    for (int j = 1; j <= M; j++)calc_sum_time += C[j] * N;

    cout << calc_sum_time << endl;

    return 0;
}

