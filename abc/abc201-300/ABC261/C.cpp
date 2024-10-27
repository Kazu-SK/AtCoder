
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

    map<string, bool> BMap;
    map<string, int> CMap;


    cin >> N;

    vector<string> S(N);


    for (int i = 0; i < N; i++) {
        cin >> S[i];

        CMap[S[i]] = 0;
    }

    for (int i = 0; i < N; i++) {

        if (BMap[S[i]] == false) {
            BMap[S[i]] = true;

            cout << S[i] << endl;
        }
        else {
			string counter;

            CMap[S[i]]++;

            counter = IntToString(CMap[S[i]]);

            cout << S[i] + "(" + counter + ")" << endl;

        }
    }

    return 0;
}

