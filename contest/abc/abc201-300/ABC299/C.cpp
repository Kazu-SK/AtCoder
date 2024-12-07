
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
    int N = 0;


    cin >> N;
    
    vector<char> S(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    int ans_count = 0;
    int o_count = 0;

    for (int i = 0; i < N; i++) {

        if (S[i] == '-') {
            //ans_count = max(ans_count, o_count);
            o_count = 0;
        }
        else {
            o_count++;
            ans_count = max(ans_count, o_count);
        }
    }


    if (ans_count == 0 || ans_count == S.size()) {
        cout << -1 << endl;
    }
    else {
        cout << ans_count << endl;
    }

    return 0;
}

