
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    string S;

    int S_count[26] = { 0 };


    cin >> S;

    for (int i = 0; i < S.size(); i++) {

        int S_num = S[i] - 'a';

        S_count[S_num]++;
    }

    bool no_found = true;

    for (int i = 0; i < 26; i++) {
        if (S_count[i] == 1) {
            cout << char(i + 'a') << endl;
            no_found = false;
            break;
        }
    }

    if (no_found) {
        cout << -1 << endl;
    }


    return 0;
}

