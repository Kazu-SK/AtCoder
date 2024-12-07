
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

map<int, vector<int>> graph;
int dist[1 << 18];
int N;

void getdist(int start) {
    
    const int INF = 1 << 18;
    queue<int> Q;

    for (int id = 1; id <= N; id++) {
        dist[id] = INF;
    }

    Q.push(start);
    dist[start] = 0;

    while (!Q.empty()) {
        int pos = Q.front();

        Q.pop();

        for (int i = 0; i < graph[pos].size(); i++) {
            if (dist[graph[pos][i]] == INF) {
                dist[graph[pos][i]] = dist[pos] + 1;
                Q.push(graph[pos][i]);
            }
        }
    }
}

int main()
{
    int A;
    int B;

    cin >> N;


    for (int i = 1; i < N; i++) {
        cin >> A;
        cin >> B;

        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    getdist(1);

    int max_id = 0;
    int max_dist = 0;
    for(int id = 1 ; id <= N ; id++){

        if (max_dist < dist[id]) {
            max_dist = dist[id];
            max_id = id;
        }
    }

    getdist(max_id);

    max_dist = 0;
    for(int id = 1 ; id <= N ; id++){
        max_dist = max(max_dist, dist[id]);
    }

    cout << max_dist + 1 << endl;

    return 0;
}

