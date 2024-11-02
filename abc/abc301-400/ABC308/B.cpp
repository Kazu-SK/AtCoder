
#include <iostream>
#include <vector>
#include <map>

using namespace std;

using ll = long long;

int main()
{

    int N = 0, M = 0;
    map<string, int> Map;


    cin >> N >> M;

    vector<string> C(N + 1);
    vector<string> D(M + 1);
    vector<int> P(M + 1);


    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }

    for (int i = 1; i <= M; i++) {
        cin >> D[i];
    }

    for (int i = 0; i <= M; i++) {
        cin >> P[i];
    }

    for (int i = 1; i <= M; i++) {
        Map[D[i]] = P[i];
    }


    int answer_P = 0;

    for (int i = 1; i <= N; i++) {
        
        if (Map[C[i]] > 0) {
            answer_P += Map[C[i]];
        }
        else {
            answer_P += P[0];
        }
    }

    cout << answer_P << endl;

    return 0;
}

