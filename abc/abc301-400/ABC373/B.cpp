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
    string KEY = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string S;
    map<char, int> Map;


    cin >> S;

    for (int i = 0; i < S.size(); i++) {
        Map[S[i]] = i + 1;
    }

    char pos = 'A';
    int ans = 0;

    for (int i = 0; i < KEY.size(); i++) {
        ans += abs(Map[pos] - Map[KEY[i]]);

        pos = KEY[i];
    }

    cout << ans << endl;

    return 0;
}

