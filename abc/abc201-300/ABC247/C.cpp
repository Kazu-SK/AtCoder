
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

string IntToString(int n) {

    string ans;

    if (n == 0) {
        ans = "0";
    }

    while (n > 0) {
        
        int i_place1 = n % 10;
        char s_place1 = i_place1 + '0';

        ans.insert(ans.begin(), s_place1);

        n /= 10;
    }

    return ans;
}

int main()
{
    int N = 0;


    cin >> N;

    vector<string> S(17);


    S[1] = "1";
    S[2] = "1 2 1";

    for (int i = 3; i <= 16; i++) {

        string s = IntToString(i);

        s.insert(s.begin(), ' ');
        s.push_back(' ');

        S[i] = S[i - 1] + s + S[i - 1];
    }

    cout << S[N] << endl;



    return 0;
}

