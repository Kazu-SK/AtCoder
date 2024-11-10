#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int N;
int R = 0;
int C = 0;
char field[100][100];
int dist[100][100];
int sx;
int sy;
int gx;
int gy;
const int INF = 1e9;

void getdist() {

    int current_x, current_y;
    int next_x, next_y;
    queue<pair<int, int>> Q;

    pair<int, int> start_p;
    pair<int, int> current_p;
    pair<int, int> next_p;

    int diff[4][2] = { {0, 1},{1, 0},{0,-1},{-1, 0} };

    start_p.first = sy;
    start_p.second = sx;

    Q.push(start_p);
    dist[sy][sx] = 0;

    current_y = sy;
    current_x = sx;

    dist[current_y][current_x] = 0;

    while (!Q.empty()) {
        current_p = Q.front();

        current_y = current_p.first;
        current_x = current_p.second;

        Q.pop();


        for (int i = 0; i < 4; i++) {

            next_y = current_y + diff[i][0];
            next_x = current_x + diff[i][1];


            if (dist[next_y][next_x] == INF && field[next_y][next_x] == '.') {
                dist[next_y][next_x] = dist[current_y][current_x] + 1;

                next_p.first = next_y;
                next_p.second = next_x;
                Q.push(next_p);
            }
        }

    }
}

int main()
{

    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;

    for (int r = 1; r <= R; r++) {
        for (int c = 1; c <= C; c++) {
            cin >> field[r][c];
            dist[r][c] = INF;
        }
    }

    getdist();

    cout << dist[gy][gx] << endl;

    return 0;
}

