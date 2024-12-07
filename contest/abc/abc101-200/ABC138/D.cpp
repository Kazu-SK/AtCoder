
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

//vector<int> a;
//vector<int> b;
vector<LL> counter;
map<int, vector<int>> Connect;
map<int, LL> add_x;
map<int, bool> visit;


void AddCounter(int v, LL x = 0) {


    if (visit[v] == true) //すでに訪問していたら何もしない。
        return;

    visit[v] = true;

    counter[v] += x + add_x[v];
    
    for (int i = 0; i < Connect[v].size(); i++) {
        AddCounter(Connect[v][i], counter[v]);
    }
}

int main()
{
    int N = 0, Q = 0;


    cin >> N >> Q;


    for (int i = 0; i <= N; i++) {
        counter.push_back(0);
    }

    for (int i = 1; i <= N - 1; i++) {
        int a = 0, b = 0;
        cin >> a >> b;
        Connect[a].push_back(b);
        Connect[b].push_back(a); //相互に接続関係を記載する。
    }

    for (int i = 1; i <= Q; i++) {
        int p = 0, x = 0;
		cin >> p >> x;

        add_x[p] += x;
    }

    AddCounter(1);

    for (int v = 1; v <= N; v++) {
        cout << counter[v] << " ";
    }

    return 0;
}

