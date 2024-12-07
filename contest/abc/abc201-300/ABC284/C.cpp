
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

map<int, vector<int>> Connect;
map<int, bool> Group;

void ConnectedComponents(int point) {

    if (Group[point] == false) {
        Group[point] = true;
    }
    else {
        return;
    }

    for (int i = 0; i < Connect[point].size(); i++) {
        ConnectedComponents(Connect[point][i]);
    }
}

int main()
{
    int N = 0;
    int M = 0;


    cin >> N >> M;


    vector<int> u(M);
    vector<int> v(M);

    for (int i = 0; i < M; i++) {
        cin >> u[i];
        cin >> v[i];

        Connect[u[i]].push_back(v[i]);
        Connect[v[i]].push_back(u[i]);
    }

    int ans = 0;

    for (int point = 1; point <= N; point++) {
        
        if (Group[point] == false) {
            ans++;
            ConnectedComponents(point);
        }
    }

    cout << ans << endl;


    return 0;
}

