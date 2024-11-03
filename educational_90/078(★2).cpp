#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;

    vector<int> a(M + 1, 0);
    vector<int> b(M + 1, 0);
    vector<vector<int>> connect(N + 1);

    for (int i = 1; i <= M; i++) {
        cin >> a[i] >> b[i];

        connect[a[i]].push_back(b[i]);
        connect[b[i]].push_back(a[i]);
    }

    int answer = 0;
    for (int vertex = 1; vertex <= N; vertex++) {

        sort(connect[vertex].begin(), connect[vertex].end());

        int con_num = 0;
        for (int con = 0; con < connect[vertex].size(); con++) {
            if (connect[vertex][con] < vertex) {
                con_num++;
            }
            else {
                break;
            }
        }

        if (con_num == 1)
            answer++;
    }

    cout << answer << endl;

    return 0;
}

