
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> P(N + 1, 0);

    for (int i = 2; i <= N; i++) {
        cin >> P[i];
    }

    int p_itr = N;
    int g_count = 0;
    while (true) {

        if (P[p_itr] == 1) {
            g_count++;
            break;
        }
        
        p_itr = P[p_itr];
        g_count++;

        //cout << p_itr << endl;
    }

    cout << g_count << endl;

    return 0;
}

