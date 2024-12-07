
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{

    int N = 0, M = 0;

    cin >> M;
    vector<vector<int>> m_pos(M, vector<int>(2));
    vector<vector<int>> m_pos_diff(M, vector<int>(2));

    map<pair<int, int>, bool> n_Map;


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 2; j++) {

            cin >> m_pos[i][j];

            if (i == 0) {
                m_pos_diff[i][j] = 0;
            }
            else {
                m_pos_diff[i][j] = m_pos[i][j] - m_pos[0][j];
            }
        }
    }

    cin >> N;
    vector<vector<int>> n_pos(N, vector<int>(2));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> n_pos[i][j];
        }

        pair<int, int> p;

        p.first = n_pos[i][0];
        p.second = n_pos[i][1];

        n_Map[p] = true;
    }

    for (int n_i = 0; n_i < N; n_i++) {
	    bool judge = true;

        int x = n_pos[n_i][0];
        int y = n_pos[n_i][1];

        int diff_x = n_pos[n_i][0] - m_pos[0][0];
        int diff_y = n_pos[n_i][1] - m_pos[0][1];

        for (int d_i = 0; d_i < M; d_i++) {
            pair<int, int> p;

			int search_x = x + m_pos_diff[d_i][0];
			int search_y = y + m_pos_diff[d_i][1];

            p.first = search_x;
            p.second = search_y;

            if (n_Map[p] == false) {
                judge = false;
                break;
            }
        }

        if (judge == true) {
            cout << diff_x << " " << diff_y << endl;
            break;
        }
    }

    return 0;
}

