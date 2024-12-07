
#include <iostream>
#include <vector>

using namespace std;

using LL = long long;

int main()
{
    int N = 0;
    int M = 0;


    cin >> N >> M;

    vector<vector<int>> a(M + 1, vector<int>(N + 1, 0));

    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> a[i][j];
        }
    }


    int answer = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) { // 隣同士になる可能性のある組み合わせ

            bool judge = false;

            for (int k = 1; k <= M; k++) {
                for (int l = 1; l < N; l++) { // iとjが隣同士になったことがあるかを探索

                    if (a[k][l] == i && a[k][l + 1] == j)judge = true;
                    if (a[k][l + 1] == i && a[k][l] == j)judge = true;
                }
            }

            if (judge == false) {
                answer++;
            }
        }
    }


    cout << answer << endl;

    return 0;
}


