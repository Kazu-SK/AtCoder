
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;


int GCP(char self, char enemy) {

    const int LOSEORDRAW = 0;
    const int WIN = 1;

    int result = LOSEORDRAW;

    if (self == 'G' && enemy == 'C') {
        result = WIN;
    }
    else {
        if (self == 'C' && enemy == 'P') {
            result = WIN;
        }
        else {
            if (self == 'P' && enemy == 'G')
                result = WIN;
        }
    }

    return result;
}

bool desc_asc(pair<int, int>& left, pair<int, int>& right) {
    if (left.first == right.first) {
        return left.second < right.second;
    }
    else {
        return right.first < left.first;
    }
}

int main()
{
    int N = 0, M = 0;


    cin >> N >> M;

    vector<pair<int, int>> Lank(2 * N); // 順位 pair<ポイント, 人>
    vector<vector<char>> A(2 * N, vector<char>(M));

    for (int i = 0; i < 2 * N; i++) {

        Lank[i] = make_pair(0, i);

        for (int m = 0; m < M; m++) {
            cin >> A[i][m];
        }
    }

    for (int m = 0; m < M; m++) {

        for (int i = 0; i + 1 < 2 * N; i = i + 2) {

            int human[2] = { 0 };

            human[0] = Lank[i].second;
            human[1] = Lank[i + 1].second;

            Lank[i].first += GCP(A[human[0]][m], A[human[1]][m]);
            Lank[i + 1].first += GCP(A[human[1]][m], A[human[0]][m]);
        }

        sort(Lank.begin(), Lank.end(), desc_asc);
    }

    map<int, int> Map;

    for (int i = 0; i < 2 * N; i++) {
        cout << Lank[i].second + 1 << endl;
    }

    return 0;
}

