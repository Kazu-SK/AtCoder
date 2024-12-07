
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    map<pair<int, int>, bool> Graph;

    int N = 0, M = 0;


    cin >> N >> M;

    vector<int> U(M);
    vector<int> V(M);

    for (int i = 0; i < M; i++) {
        pair<int, int> p;

        cin >> U[i] >> V[i];

        p.first = U[i];
        p.second = V[i];
        Graph[p] = true;

        p.first = V[i];
        p.second = U[i];
        Graph[p] = true;
    }


    int ans = 0;

    for (int a = 1; a <= N - 2; a++) {
        for (int b = a + 1; b <= N - 1; b++) {
            for (int c = b + 1; c <= N; c++) {

                pair<int, int> p[3];

                p[0].first = a;
                p[0].second = b;
                p[1].first = b;
                p[1].second = c;
                p[2].first = c;
                p[2].second = a;

                if (Graph[p[0]] == true && Graph[p[1]] == true && Graph[p[2]] == true ) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

