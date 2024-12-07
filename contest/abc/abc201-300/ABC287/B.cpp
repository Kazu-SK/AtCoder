
#include <iostream>
#include <vector>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;


    vector<string> S(N);
    vector<string> T(M);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> T[i];
    }

    int ans_count = 0;
    for (int i = 0; i < N; i++) {

		string S_last3;

		S_last3 = S[i].substr(3, 3);

        for (int j = 0; j < M; j++) {

            if (S_last3 == T[j]) {
                ans_count++;
                break;
            }
        }
    }

    cout << ans_count << endl;

    return 0;
}

