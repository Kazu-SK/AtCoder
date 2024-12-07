
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 5, M = 5;


    cin >> N >> M;

    vector<vector<char>> S(N, vector<char>(M));


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> S[i][j];
        }
    }


    int answer = 0;

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {

            int o_count;

            o_count = 0;

            for (int z = 0; z < M; z++) {
               
                if (S[i][z] == 'o' || S[j][z] == 'o') {
                    o_count++;
                }
            }

            if (o_count == M) {
                answer++;
            }
        }
    }


    cout << answer << endl;

    return 0;
}

