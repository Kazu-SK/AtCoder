#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int MoveCount(int init_pos, int g_pos, int d_pos, int parts) {

    int r = 0;
    int l = 0;
    int d = 0;
    int ans = 0;
    int l_count = 0;
    int r_count = 0;

    l = init_pos;
    d = d_pos;

    if (g_pos > init_pos) {
        l = abs(g_pos - parts) + init_pos;
    }
    else {
        l = init_pos - g_pos;
    }

    if (g_pos > d_pos) {
        d = abs(g_pos - parts) + d_pos;
    }
    else {
        d = d_pos - g_pos;
    }

    if (d < l) {
        if (g_pos > init_pos) {
            r = g_pos - init_pos;
        }
        else {
            r = parts - init_pos + g_pos;
        }

        ans = r;
    }
    else {
        ans = l;
    }

    return ans;
}

int main()
{
    int N = 0;
    int Q = 0;
    int L_pos = 1;
    int R_pos = 2;


    cin >> N >> Q;

    vector<char> H(Q);
    vector<int> T(Q);

    for (int i = 0; i < Q; i++) {
        cin >> H[i] >> T[i];
    }

    int ans = 0;

    for (int i = 0; i < Q; i++) {

        if (H[i] == 'R') {
            ans += MoveCount(R_pos, T[i], L_pos, N);
            R_pos = T[i];
        }
        else {
            ans += MoveCount(L_pos, T[i], R_pos, N);
            L_pos = T[i];
        }
    }

    cout << ans << endl;

    return 0;
}

